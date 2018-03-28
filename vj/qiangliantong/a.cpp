#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x); memset(x,0,sizeof(x));

vector<int> vec[maxn];
int n, tot;
int head[maxn];
int dfn[maxn], low[maxn], vis[maxn], dcnt, bcnt, de[maxn];

void dfs(int u, int fa) {
    dfn[u] = low[u] = ++dcnt;
    vis[u] = 1;
    for (int i = 0;i < vec[u].size();i++) {
        int v = vec[u][i];
        if (v == fa) continue;
        if (!vis[v]) {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
        } else if (vis[v] == 1)
            low[u] = min(low[u], dfn[v]);
    }
    vis[u] = 2;
}

void solve() {
    memset(dfn, 0, sizeof(dfn));
    memset(de, 0, sizeof(de));
    memset(vis, 0, sizeof(vis));
    dcnt = bcnt = 0;
    for (int i = 1; i <= n; i++)
        if (!vis[i])
            dfs(i, i);
    for (int u = 1; u <= n; u++)
        for (int i = 0;i < vec[u].size();i++) {
            int v = vec[u][i];
            if (low[u] != low[v])
                de[low[u]]++;
        }
    int leaf = 0;
    for (int i = 1; i <= n; i++)
        if (de[i] == 1)
            leaf++;
    cout << (leaf + 1) / 2 << endl;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif

    while (cin >> n >> tot) {
        int u, v, k = 0;
        memset(head, -1, sizeof(head));
        for (int i = 0; i < tot; i++, k += 2) {
            cin >> u >> v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        solve();
    }
    return 0;
}
