#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define N 200005

int d[N][25], v[N];

void RMQ_init(int n) {
    int i, j;
    for (i = 1; i <= n; i++)
        d[i][0] = v[i];
    for (j = 1; (1 << j) <= n; j++) {
        for (i = 1; i + (1 << j) - 1 <= n; i++)
            d[i][j] = max(d[i][j - 1], d[i + (1 << (j - 1))][j - 1]);
    }


}

int RMQ(int L, int R) {
    //  int k=(int)(log((R-L+1)*1.0)/log(2.0));
    int k = 0;
    while ((1 << (k + 1)) <= R - L + 1)
        k++;
    return max(d[L][k], d[R - (1 << k) + 1][k]);
}

int main() {
    int t, n, k, m, i, j, p, ans;
    while (~scanf("%d%d", &n, &k)) {
        if (n < 0 && k < 0)
            break;
        for (i = 1; i <= n; i++)
            scanf("%d", &v[i]);
        RMQ_init(n);
        int tmp = RMQ(1, n);
        for (m = max(1, (k + 1) / tmp); m <= n; m++) {
            t = n / m;
            ans = 0;
            for (p = 0, j = 1; p < m; p++, j += t) {
                ans += RMQ(j, j + t - 1);
                if (ans > k)
                    break;
            }
            if (ans > k)
                break;
        }
        if (m <= n)
            printf("%d\n", m);
        else
            printf("-1\n");
    }
    return 0;
}