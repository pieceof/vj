#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x,0,sizeof(x));

ll a[maxn];

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    while(cin >> n && n){
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i])
                dp[i] = 0;
            else
                dp[i] = 1;
        }
    }

    return 0;
}
