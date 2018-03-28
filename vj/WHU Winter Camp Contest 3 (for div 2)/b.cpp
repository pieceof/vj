#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6+7;
typedef long long ll;
int main(){

#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
    int T;
    ll n;
    scanf("%d",&T);
    while(T--){
        scanf("%lld",&n);
        ll ans = n * (n + 1) / 2;
        for(int i = 0;pow(2,i) <= n;i++){
            ans -= (2 * pow(2,i));
        }
        printf("%lld\n",ans);
    }

    return 0;
}