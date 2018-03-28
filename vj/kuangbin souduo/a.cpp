#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;

int map1[1000][1000];
int ans = 0, m;
int n, k;
int flag[1000];

void dfs(int cor) {
    if (k == m) {
        ans++;
        return;
    }
    if (cor > n) {
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (flag[i] == 0 && map1[cor][i] == 0) {
            flag[i] = 1;
            m++;
            dfs(cor + 1);
            flag[i] = 0;
            m--;
        }
    }
    dfs(cor + 1);
}

int main() {
    char ch;
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    while (~scanf("%d%d", &n, &k) && n >= 0) {
        getchar();
        ans = 0;
        m = 0;
        memset(map1, 0, sizeof(map1));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                scanf("%c", &ch);

                if (ch == '.') {
                    map1[i][j] = 1;
                } else {
                    map1[i][j] = 0;
                }

            }
            getchar();
        }

        dfs(1);
        printf("%d\n", ans);
    }

    return 0;
}