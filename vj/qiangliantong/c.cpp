#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e5 + 7;
typedef long long ll;
#define clr(x); memset(x,0,sizeof(x));

struct rec {
    int v, w;

    rec(int _v, int _w) {
        v = _v;
        w = _w;
    }
};

int n, m, dfn[maxn], low[maxn], vis[maxn], dcnt;
vector<rec> vec[maxn];
int bri[1007][1007];

void tarjan(int u, int fa) {
    dfn[u] = low[u] = ++dcnt;
    vis[u] = 1;
    for (int i = 0; i < vec[u].size(); i++) {
        int v = vec[u][i].v;
        if (v == fa) continue;
        if (!vis[v]) {
            tarjan(v, u);
            low[u] = min(low[u], low[v]);
        } else if (vis[v] == 1) {
            low[u] = min(low[u], dfn[v]);
        }
    }
    vis[u] = 2;
}

void solve() {
    clr(dfn);clr(low);clr(vis);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!dfn[i]) {
            tarjan(1, -1);
            cnt++;

        }
    }
    if (cnt > 1) {
        cout << 0 << endl;
        return;
    }
    int ans = inf;
    for (int u = 1; u <= n; u++) {
        for (int i = 0; i < vec[u].size(); i++) {
            int v = vec[u][i].v;
            if (low[v] > dfn[u] && bri[u][v] <= 1)
                ans = min(ans, vec[u][i].w);
        }
    }
    if (ans == inf) {
        cout << -1 << endl;
    } else if (ans == 0) {
        cout << 1 << endl;
    } else {
        cout << ans << endl;
    }

}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    while (cin >> n >> m && n != 0) { clr(vec);
        int x, y, z;clr(bri);
        for (int i = 0; i < m; ++i) {
            cin >> x >> y >> z;
            bri[x][y]++;
            bri[y][x]++;
            vec[x].emplace_back(rec(y, z));
            vec[y].emplace_back(rec(x, z));
        }
        solve();

    }

    return 0;
}