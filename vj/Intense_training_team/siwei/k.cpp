#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 2e6 + 7;
typedef long long ll;

int a[maxn];
int b[maxn];

int main() {
    int i, j, n, ans, d, tag, maxx, len, num;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            a[n + i] = a[i];
        }
        for (i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            b[n + i] = b[i];
        }
        ans = 0;
        maxx = 0;
        num = 0;
        len = 0;
        d = -1;
        for (i = 0; i < 2 * n; i++) {
            num += a[i];
            ans += (a[i] - b[i]);
            len++;
            if (len >= n) {
                maxx = num;
                d = i - len + 1;
                break;
            }
            if (ans < 0) {
                if (num > maxx) {
                    maxx = num;
                    d = i;
                }
                if (i > n)
                    break;
                ans = 0;
                num = 0;
                len = 0;
            }
        }
        printf("%d\n", d);
    }
    return 0;
}