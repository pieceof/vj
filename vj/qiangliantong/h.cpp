#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e5 + 7;
typedef long long ll;
#define clr(x); memset(x,0,sizeof(x));

int n, m, u, v;
vector<int> vec[maxn];
int dfn[maxn], low[maxn], vis[maxn], dcnt, Bcnt;
int belong[maxn];
stack<int> sta;
void init() {
    Bcnt = 0;
    clr(dfn);clr(low);clr(vis);clr(belong);
    while(!sta.empty()){
        sta.pop();
    }
}

void tarjan(int u, int fa) {
    sta.push(u);
    dfn[u] = low[u] = ++dcnt;
    vis[u] = 1;
    for (int i = 0; i < vec[u].size(); i++) {
        int v = vec[u][i];
        if (v == fa) continue;
        if (!vis[v]) {
            tarjan(v, u);
            low[u] = min(low[u], low[v]);
        } else if (vis[v] == 1)
            low[u] = min(low[u], dfn[v]);
    }
    vis[u] = 2;
    if (low[u] == dfn[u]) {
        ++Bcnt;
        int v;
        do {
            v = sta.top();
            sta.pop();
            vis[v] = 0;
            belong[v] = Bcnt;
        } while (u != v);
    }
}


void solve() {
    init();
    for (int i = 1; i <= n; i++) {
        if (!dfn[i]) {
            tarjan(i, -1);
        }
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif

    while (cin >> n >> m && n != 0) { clr(vec);
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            vec[u].emplace_back(v);
        }

        solve();
        if(Bcnt != 1){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}

