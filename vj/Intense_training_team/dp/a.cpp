#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x, 0, sizeof(x))
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1

int main(){

#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif

    int T,n;
    cin >> T;
    while(T--){
        cin >> n;
        cout << 2 * n * n - n + 1 << endl;
    }

    return 0;
}