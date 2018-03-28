#include <vector>
#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x,0,sizeof(x));
int n;
double dis[maxn];
int vis[maxn];

struct rec {
    int x, y;
} a[maxn];

double distance1(int x, int y) {
    int p = abs(a[x].x - a[y].x);
    int q = abs(a[x].y - a[y].y);
    return sqrt((double) p * p + q * q);
}


void spfa(int x) {
    clr(vis);
    for (int i = 1; i <= n; i++) {
        dis[i] = inf;
    }

    queue<int> data;
    dis[x] = 0;
    data.push(x);
    while (!data.empty()) {
        int u = data.front();
        vis[u] = false;
        data.pop();
        for (int i = 1; i <= n; i++) {
            if (i != u) {
                if (dis[i] > max(dis[u], distance1(u, i))) {
                    dis[i] = max(dis[u], distance1(u, i));
                    if (!vis[i]) {
                        vis[i] = true;
                        data.push(i);
                    }
                }
            }
        }
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int num = 0;
    while (~scanf("%d", &n) && n) {
        for (int i = 1; i <= n; i++) {
            scanf("%d%d", &a[i].x, &a[i].y);
        }
        spfa(1);
        printf("Scenario #%d\n", ++num);
        printf("Frog Distance = %.3lf\n", dis[2]);
        cout << endl;
    }

    return 0;
}