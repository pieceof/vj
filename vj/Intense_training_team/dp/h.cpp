#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int dp[2000][2000];
int a[2000];

void getdp(int l, int r) {

    int ans = 0;

    if (l == r) {
        dp[l][r] = 1;
        return;
    }

    if (a[l] == a[r]) {
        if (!dp[l + 1][r - 1] && l + 1 <= r - 1)
            getdp(l + 1, r - 1);
        ans = dp[l + 1][r - 1] + 2;
    }
    if (!dp[l + 1][r])
        getdp(l + 1, r);
    if (!dp[l][r - 1])
        getdp(l, r - 1);

    dp[l][r] = max(max(dp[l + 1][r], dp[l][r - 1]), ans);

    return;


}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;

    while (cin >> n && n) {

        memset(a, 0, sizeof(a));
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            a[i + n] = a[i];
        }

        getdp(1, 2 * n);

        int ans = 0;
        for (int i = 1; i <= 2 * n; ++i) {
            ans = max(ans, dp[i][i + n - 1]);
        }
        for (int i = 1; i <= 2 * n; ++i) {
            ans = max(ans, dp[i][i + n - 2] + 1);
        }
        cout << ans << endl;


    }

    return 0;
}