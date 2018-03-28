#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

ll a[maxn];

ll GCD(ll a, ll b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n;
        scanf("%I64d", &n);
        ll fenzi = 0, fenmu;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%I64d", &a[i]);
            sum += abs(a[i]);
        }
        for (int i = 0; i < n; i++)
            fenzi += a[i] * a[i];
        fenzi = fenzi * n - sum * sum;
        fenmu = n;
        if (fenzi == 0) {
            printf("0/1\n");
            continue;
        } else {
            ll k = GCD(fenzi, fenmu);
            printf("%I64d/%I64d\n", fenzi / k, fenmu / k);
            continue;
        }
    }
    return 0;
}
