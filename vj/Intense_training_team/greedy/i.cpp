#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

const double eps = 0.00000001;
double dp[maxn];
int c[maxn];

int main() {
    int T;
    int n;
    int cs = 0;
    scanf("%d", &T);
    while (T--) {
        cs++;
        memset(dp, 0, sizeof(dp));
        memset(c, 0, sizeof(c));
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &c[i]);
            dp[i] = c[i] - c[i - 1];
        }
        double Speed = dp[n];
        int cnt = 1;
        for (int i = n - 1; i >= 1; i--) {
            double Tmp = dp[i] / Speed;
            if (fabs(Tmp - (int) Tmp) <= eps) {
                cnt = cnt + (int) Tmp;
            } else {
                cnt = cnt + (int) Tmp + 1;
                Speed = dp[i] / ((int) Tmp + 1);
            }
        }
        printf("Case #%d: %d\n", cs, cnt);
    }
    return 0;
}
