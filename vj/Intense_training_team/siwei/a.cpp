#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    ll a, b, c;
    while (~scanf("%lld%lld%lld", &a, &b, &c)) {
        ll x = 0;
        if (a > 2) {
            x += a - 2;
            a = 2;
        }
        if (b > 2) {
            x += b - 2;
            b = 2;
        }
        if (c > 2) {
            x += c - 2;
            c = 2;
        }
        ll sum = a + b + c;
        ll ans = 0, y = 0;
        if (sum == 0) {
            ans = 0;
            y = 0;
        }
        else if (sum == 1) {
            ans = 0;
            y = 0;
        }
        else if (sum == 2) {
            ans = 1;
            y = 2;
        }
        else if (sum == 3) {
            ans = 3;
            y = 3;
        }
        else if (sum == 4) {
            ans = 6;
            y = 4;
        }
        else if (sum == 5) {
            ans = 10;
            y = 5;
        }
        else if (sum == 6) {
            ans = 15;
            y = 6;
        }
        ans += x * y;
        printf("%lld\n", ans);
    }

    return 0;
}