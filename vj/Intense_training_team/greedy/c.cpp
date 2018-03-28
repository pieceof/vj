#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int visited[maxn];

struct node {
    int p, d;
};

bool cmp(node a, node b) {
    return a.p > b.p;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;
    while (~scanf("%d", &n)) {
        memset(visited, 0, sizeof(visited));
        node a[maxn];
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &a[i].p, &a[i].d);
        }
        sort(a, a + n, cmp);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = a[i].d; j >= 1; j--) {
                if (visited[j])
                    continue;
                visited[j] = 1;
                sum += a[i].p;
                break;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}