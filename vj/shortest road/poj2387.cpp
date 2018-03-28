#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e4 + 7;
typedef long long ll;
#define clr(x) memset(x,0,sizeof(x))


struct rec {
    int v;
    int w;

    rec(int _v, int _w) {
        v = _v;
        w = _w;
    }
};

vector<rec> vec[maxn];
bool vis[maxn];
int dis[maxn];
int n, t, u, v, w;

void spfa(int x) {
    clr(vis);
    for (int i = 1; i <= n; ++i) {
            dis[i] = inf;
    }

    queue<int> data;
    data.push(x);
    dis[x] = 0;
    while (!data.empty()) {
        int u = data.front();
        data.pop();
        vis[u] = false;
        for (int i = 0; i < vec[u].size(); ++i) {
            int v = vec[u][i].v;
            int w = vec[u][i].w;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                if (!vis[v]) {
                    vis[v] = true;
                    data.push(v);
                }
            }
        }
    }


}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif


    while (~scanf("%d%d", &t, &n)) {
        clr(vec);
        for (int i = 0; i < t; i++) {
            scanf("%d%d%d", &u, &v, &w);
            vec[u].push_back(rec(v, w));
            vec[v].push_back(rec(u, w));
        }

        spfa(1);
        printf("%d\n", dis[n]);
    }
    return 0;
}