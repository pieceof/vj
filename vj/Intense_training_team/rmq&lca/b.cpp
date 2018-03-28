#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e5 + 7;
typedef long long ll;

int a[maxn];

int minx(int l, int r) {
    int min1 = inf;
    int id = 0;
    for (int i = l; i <= r; i++) {
        if(min1 > a[i]){
            min1 = a[i];
            id = i;
        }
    }
    return id;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    string str;
    int m, n;
    int ans[maxn];
    while (cin >> str >> m) {
        n = str.length();
        if (m <= 0) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            a[i] = (int) str[i] - '0';
        }
        int ide = -1;
        int num = 0;
        memset(ans,0,sizeof(ans));
        for (int i = m; i < n; i++) {
            ide = minx(ide + 1, i);
            ans[num] = a[ide];
            num++;
        }
        bool flag = true;
        for(int i = 0;i < num;i++){
            if(flag){
                if(ans[i]){
                    flag = false;
                }
            }
            if(!flag){
                cout << ans[i];
            }
        }
        if(flag){
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}