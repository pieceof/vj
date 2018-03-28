#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>


using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int ans = 0;
int nn, mm;

void dfs(int m, int v, int r, int h, int a) {
    if (m * (r - 1) * (r - 1) * (h - 1) < v && m != mm)
        return;
    if (ans && a > ans)
        return;
    if (v < 0) {
        return;
    }
    if (m == 0 && v == 0 && (a < ans || ans == 0)) {
        ans = a;
        return;
    }
    for (int i = r - 1; i >= m; --i) {
        for (int j = h - 1; j >= m; --j) {
            int vv = i * i * j;
            int aa = 2 * i * j;
            if (m == mm)
                aa += i * i;
            dfs(m - 1, v - vv, i, j, a + aa);
        }
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    scanf("%d%d", &nn, &mm);
    dfs(mm, nn, 100, 1000, 0);
    printf("%d\n", ans);
    return 0;
}