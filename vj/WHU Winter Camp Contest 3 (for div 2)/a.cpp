#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int main(){

#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif

    ll n;

    while(~scanf("%d",&n)){
        double t = 1.0 * n / 4;
        if(floor(t) == t){
            printf("%lld\n",(ll)t - 1);
        }else{
            printf("%lld\n",(ll)floor(t));
        }

    }

    return 0;
}

