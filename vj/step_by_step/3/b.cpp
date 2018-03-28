#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
int map[10][10];

void clone() {
    for (int i = 0; i <= m + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            data[cl][i][j].x = data[op][i][j].x;
            data[cl][i][j].y = data[op][i][j].y + 1;
        }
    }
    return;
}


bool bfs_people(int i,int j){

}

void bfs_box() {
    int op = 0;
    int cl = 1;
    for (int i = 0; i <= m + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            data[1][i][j].x = map1[i][j];
            data[1][i][j].y = 0;
        }
    }
    while (op < cl) {
        op++;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (data[op][i][j].x == 2) {
                    if (data[op][i - 1][j].x == 1 || data[op][i + 1][j].x == 1) {
                        if (!(data[op][i][j - 1].x == 1 || data[op][i][j + 1].x == 1)) {
                            if (bfs_people(i, j - 1)) {
                                cl++;
                                clone();
                                if (data[cl][i][j + 1].x == 3) {
                                    printf("%d\n", data[cl][i][j].y);
                                    return;
                                }
                                data[cl][i][j].x = 0;
                                data[cl][i][j + 1].x = 2;

                            }
                            if (bfs_people(i, j + 1)) {
                                cl++;
                                clone();
                                if (data[cl][i][j - 1].x == 3) {
                                    printf("%d\n", data[cl][i][j].y);
                                    return;
                                }
                                data[cl][i][j].x = 0;
                                data[cl][i][j - 1].x = 2;
                            }
                        }
                    } else if (data[op][i][j - 1].x == 1 || data[op][i][j + 1].x == 1) {
                        if (!(data[op][i - 1][j].x == 1 || data[op][i + 1][j].x == 1)) {
                            if (bfs_people(i - 1, j)) {
                                cl++;
                                clone();
                                if (data[cl][i + 1][j].x == 3) {
                                    printf("%d\n", data[cl][i][j].y);
                                    return;
                                }
                                data[cl][i][j].x = 0;
                                data[cl][i + 1][j].x = 2;
                            }
                            if (bfs_people(i + 1, j)) {
                                cl++;
                                clone();
                                if (data[cl][i - 1][j].x == 3) {
                                    printf("%d\n", data[cl][i][j].y);
                                    return;
                                }
                                data[cl][i][j].x = 0;
                                data[cl][i - 1][j].x = 2;
                            }
                        }
                    } else {
                        if (bfs_people(i - 1, j)) {
                            cl++;
                            clone();
                            if (data[cl][i][j + 1].x == 3) {
                                printf("%d\n", data[cl][i][j].y);
                                return;
                            }
                            data[cl][i][j].x = 0;
                            data[cl][i + 1][j].x = 2;
                        }
                        if (bfs_people(i + 1, j)) {
                            cl++;
                            clone();
                            if (data[cl][i][j - 1].x == 3) {
                                printf("%d\n", data[cl][i][j].y);
                                return;
                            }
                            data[cl][i][j].x = 0;
                            data[cl][i - 1][j].x = 2;
                        }
                        if (bfs_people(i, j - 1)) {
                            cl++;
                            clone();
                            if (data[cl][i + 1][j].x == 3) {
                                printf("%d\n", data[cl][i][j].y);
                                return;
                            }
                            data[cl][i][j].x = 0;
                            data[cl][i][j + 1].x = 2;
                        }
                        if (bfs_people(i, j + 1)) {
                            cl++;
                            clone();
                            if (data[cl][i - 1][j].x == 3) {
                                printf("%d\n", data[cl][i][j].y);
                                return;
                            }
                            data[cl][i][j].x = 0;
                            data[cl][i][j - 1].x = 2;
                        }
                    }
                }
            }
        }
    }
}

int main() {

    scanf("%d", &T);
    while (T--) {
        int m, n;
        memset(map1, 0, sizeof(map1));
        scanf("%d%d", &m, &n);
        for (int i = 0; i <= m + 1; i++) {
            map1[0][i] = map1[m + 1][i] = map1[i][0] = map1[i][n + 1]
            1;
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                scanf("%d", &map1[i][j]);
            }
        }

        bfs_box();

    }

    return 0;
}