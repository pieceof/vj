#include<bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6+7;
typedef  long long ll;

struct rec{
    int x,y;
};

int main(){

    rec begin,end;
    scanf("%d%d",&n,&m);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%c",ch);
            if(ch == '.'){
                map[i][j] = 1;
            }else if(ch == '#'){
                map[i][j] = 0;
            }else if(ch == 'R'){
                begin.x = i;
                begin.y =j;
            }else if(ch == 'E'){
                end.x = i;
                end.y = j;
            }

        }
        getchar();
    }

    int op = 0;
    int cl = 1;
    data[1].x = i;
    data[1].y = j;

    while(op < cl){
        op++;
        data[op]
    }


    return 0;
}