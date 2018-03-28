#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e5 + 7;
typedef long long ll;
#define clr(x) memset(x,0,sizeof(x));

struct rec {
    int v, w;

    rec(int _v, int _w) {
        v = _v;
        w = _w;
    }
};

vector<rec> vec[maxn];

bool vis[maxn];
int dis[maxn];
int n, m, u, v, w;

void spfa(int x) {
    clr(vis);
    clr(dis);

    queue<int> data;
    data.push(x);
    dis[1] = inf;
    while (!data.empty()) {
        int u = data.front();
        data.pop();
        vis[u] = false;
        for (int i = 0; i < vec[u].size(); ++i) {
            int v = vec[u][i].v;
            int w = vec[u][i].w;
            if (dis[v] < min(dis[u], w)) {
                dis[v] = min(dis[u], w);
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

    int T;
    scanf("%d",&T);
    int num = 0;
    while (T--) {
        clr(vec);
        scanf("%d%d",&n,&m);
        while (m--) {
            scanf("%d%d%d",&u,&v,&w);
            vec[u].push_back(rec(v, w));
            vec[v].push_back(rec(u, w));
        }
        spfa(1);
        printf("Scenario #%d:\n%d\n\n",++num,dis[n]);
    }

    return 0;
}