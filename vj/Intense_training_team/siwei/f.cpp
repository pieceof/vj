#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int a[maxn];

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n,x,k;
    bool flag = true;
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++) {
        cin >> x >> k;
        if (x > a[k]) {
            flag = 0;
        } else if (x == a[k]) {
            a[k]++;
        }

    }
    if (!flag) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;

}