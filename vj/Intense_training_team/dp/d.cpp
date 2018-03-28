#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x,0,sizeof(x));

double tick[maxn];
double dp[maxn];

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    double q;
    int n;
    int m;
    double w;
    char ch, ch1;
    while (cin >> q >> n && n) {
        int num = 0;
        clr(tick);
        clr(dp);
        for (int i = 0; i < n; ++i) {
            cin >> m;
            bool flag = true;
            double A = 0, B = 0, C = 0;
            for (int j = 0; j < m; ++j) {
                cin >> ch >> ch1 >> w;
                if (ch == 'A')
                    A += w;
                else if (ch == 'B')
                    B += w;
                else if (ch == 'C')
                    C += w;
                else {
                    flag = false;
                    break;
                }

            }
            if (flag && A <= 600 && B <= 600 && C <= 600 && A + B + C <= 1000) {
                tick[num] = A + B + C;
                num++;
            }
        }

        for (int i = 0; i <= num; ++i) {
            for (int j = num; j >= 1; --j) {
                if (j == 1 || (dp[j - 1] > 0 && dp[j - 1] + tick[i] <= q)) {
                    dp[j] = max(dp[j], dp[j - 1] + tick[i]);
                }
            }
        }


        double ans = 0;
        for (int i = 1; i <= num; ++i) {
            ans = max(ans, dp[i]);
        }

        printf("%.2lf\n", ans);


    }

    return 0;

}