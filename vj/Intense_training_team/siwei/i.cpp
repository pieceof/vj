#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
ll a[40005], b[40005], c[205], d[205], e[205], f[205], g[205];
ll x, l, n, t, flag = 0, p;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int T;
    scanf("%lld", &T);
    while (T--) {
        flag = 0;
        scanf("%lld", &n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &d[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &e[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &f[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &g[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &c[i]);
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[cnt1++] = d[i] + e[j];
            }
        }
        int cnt2 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[cnt2++] = f[i] + g[j];
            }
        }
        sort(a, a + cnt1);
        sort(b, b + cnt2);
        for (int i = 0; i < n; i++) {
            int j = 0;
            int k = cnt2 - 1;
            while (j < cnt1 && k >= 0) {
                if (a[j] + b[k] + c[i] == 0LL) {
                    flag = 1;
                    break;
                } else if (a[j] + b[k] + c[i] < 0)
                    j++;
                else
                    k--;
            }
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}