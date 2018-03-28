#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

char a[maxn];

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 'X')
            s++;
    }
    if (s == n / 2)
        cout << 0 << endl << a << endl;
    else {
        cout << abs(s - n / 2) << endl;
        if (s < n / 2) {
            s = n / 2 - s;
            for (int i = 0; i < n; i++)
                if (s && a[i] == 'x')
                    cout << 'X', s--;
                else cout << a[i];
        } else {
            s = s - n / 2;
            for (int i = 0; i < n; i++)
                if (s && a[i] == 'X')
                    cout << 'x', s--;
                else cout << a[i];
        }
    }
    return 0;
}

