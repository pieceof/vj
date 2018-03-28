#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif


    int c, d, n, m, k;
    cin >> c >> d >> n >> m >> k;
    int s = n * m - k;
    double p = 1.0 * c / n;
    if (s <= 0) {
        cout << 0 << endl;
        return 0;
    }
    if (p < d) {
        int ans = c * (s / n) + min(d * (s % n), c);
        cout << ans << endl;
    } else {
        cout << s * d << endl;
    }

    return 0;
}