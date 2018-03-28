#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    ll h, a, b, k;
    ll cas = 1;
    while (cin >> h >> a >> b >> k && a) {
        if(h <= a){
            cout << "Case #" << cas++ << ": YES" << endl;
            continue;
        }
        if ((h - a) <= (k - 1)*(a - b)) {
            cout << "Case #" << cas++ << ": YES" << endl;
            continue;
        }
        if ((a - b) * k > b) {
            cout << "Case #" << cas++ << ": YES" << endl;
            continue;
        }
        cout << "Case #" << cas++ << ": NO" << endl;
    }

    return 0;
}