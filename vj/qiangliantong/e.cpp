#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

#define max 10010
using namespace std;

vector<int> edge[max];
int stack[max], stop;
int block[max];
int low[max];
int dfn[max];
int ans1, ans2, n, m;
int Dindex;
bool inbox[max];

void init() {
    memset(dfn, 0, sizeof(dfn));
    for (int i = 0; i < max; i++)
        edge[i].clear();
    stop = Dindex = ans1 = ans2 = 0;
}

void deal_circle() {
    int num = 0;
    for (int i = 1; i <= block[0]; i++) {
        for (int j = 0; j < (int) edge[block[i]].size(); j++) {
            int v = edge[block[i]][j];
            if (inbox[v])
                num++;
        }
    }
    num /= 2;
    if (block[0] > num)
        ans1 += num;
    else if (block[0] < num)
        ans2 += num;
}

void tarjan(int u) {
    dfn[u] = low[u] = ++Dindex;
    stack[++stop] = u;
    for (int i = 0; i < (int) edge[u].size(); i++) {
        int v = edge[u][i];
        if (!dfn[v]) {
            tarjan(v);
            low[u] = min(low[u], low[v]);
            if (low[v] >= dfn[u]) {
                block[0] = 0;
                memset(inbox, false, sizeof(inbox));
                int top;
                do {
                    top = stack[stop--];
                    block[++block[0]] = top;
                    inbox[top] = true;
                } while (v != top);
                block[++block[0]] = u;
                inbox[u] = true;
                deal_circle();
            }
        } else
            low[u] = min(dfn[v], low[u]);
    }
}

int main() {
    int a, b;
    while (~scanf("%d%d", &n, &m) && (n || m)) {
        init();
        for (int i = 0; i < m; i++) {
            scanf("%d%d", &a, &b);
            edge[a].push_back(b);
            edge[b].push_back(a);
        }
        for (int i = 0; i < n; i++)
            if (!dfn[i])
                tarjan(i);
        printf("%d %d\n", ans1, ans2);
    }
    return 0;
}

