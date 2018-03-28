#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 0x3f3f3f3f;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            scanf("%c", ch);
            if (ch == 'x') {
                x = i;
                y = j;
            } else {
                map1[i][j] = ch - '0';
            }
        }
        getchar();
    }


    return 0;
}