#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
int dp[maxn];
int a[maxn];
int main() {
    int T,n,k;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &k);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int ans = 0;
        for(int i = 0;i <= n;i++){
            dp[i] = 1;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] <= a[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        if (ans + k == n) {
            printf("A is a magic array.\n");
            continue;
        }

        for(int i = 0;i <= n;i++){
            dp[i] = 1;
        }
        ans = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] >= a[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }
        if (ans + k == n) {
            printf("A is a magic array.\n");
            continue;
        }
        printf("A is not a magic array.\n");
    }

    return 0;
}

