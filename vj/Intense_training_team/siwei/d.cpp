#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    ll l, r;

    while (cin >> l >> r) {
        if (r <= 1) {
            cout << 0 << endl;
            continue;
        }
        if (r <= 2) {
            cout << 1 << endl;
            continue;
        }
        if (l == 0) {
            l++;
        }
        if (r - l <= 3) {
            cout << 2 << endl;
            continue;
        }
        cout << 2 + (r - l - 2) / 2 << endl;
    }

    return 0;

}
