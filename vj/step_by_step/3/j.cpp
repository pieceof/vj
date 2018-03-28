#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
struct rec{
    int l,r,v;
};


int main(){

    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&m,&n);
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                scanf("%d",&map[i][j]);
            }
        }
        int len = 0;
        scanf("%d%d%c",&q,&w,ch);
        a[len].l = q;
        a[len].r =  w;
        a[len].v = check(ch);
        while(q != 0 && w != 0){
            
        }
    }

    return 0;
}