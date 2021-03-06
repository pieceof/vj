#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int MAX = (int) 1e3 + 7;
typedef long long ll;
ll a[MAX][MAX], dp1[MAX][MAX], dp2[MAX][MAX], dp3[MAX][MAX], dp4[MAX][MAX], ans;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%lld", &a[i][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp1[i][j] = a[i][j] + max(dp1[i - 1][j], dp1[i][j - 1]);
    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= m; j++)
            dp2[i][j] = a[i][j] + max(dp2[i + 1][j], dp2[i][j - 1]);
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= 1; j--)
            dp3[i][j] = a[i][j] + max(dp3[i - 1][j], dp3[i][j + 1]);
    for (int i = n; i >= 1; i--)
        for (int j = m; j >= 1; j--)
            dp4[i][j] = a[i][j] + max(dp4[i + 1][j], dp4[i][j + 1]);
    for (int i = 2; i < n; i++) {
        for (int j = 2; j < m; j++) {
            ans = max(ans, dp1[i - 1][j] + dp4[i + 1][j] + dp2[i][j - 1] + dp3[i][j + 1]);
            ans = max(ans, dp1[i][j - 1] + dp4[i][j + 1] + dp2[i + 1][j] + dp3[i - 1][j]);
        }
    }
    printf("%lld\n", ans);
}