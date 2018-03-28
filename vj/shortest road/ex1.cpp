#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>

#define inff 1000000000
#define test system("pause")
using namespace std;
queue<int> que;
struct G {
    int len, en, next;
} edge[1000000];
int p[2000], dis[2000];
bool inque[2000];
int n, m, num, l, t;

void add(int st, int en, int len) {
    edge[num].en = en;
    edge[num].len = len;
    edge[num].next = p[st];
    p[st] = num++;
}

void spfa() {
    int i, st;
    while (que.size())
        que.pop();
    memset(inque, false, sizeof(inque));
    fill(dis, dis + n + 6, 0);
    que.push(1);
    inque[1] = true;
    dis[1]=0x3f3f3f3f;
    while (que.size()) {
        st = que.front();
        inque[st] = false, que.pop();
        for (i = p[st]; i + 1; i = edge[i].next) {
            int w = edge[i].en;

            if (dis[w] < min(edge[i].len , dis[st])) {
                dis[w] = min(edge[i].len , dis[st]);
                if (!inque[w])
                    que.push(w), inque[w] = true;
            }
        }
    }
    printf("Scenario #%d:\n%d\n", ++l, dis[n]);
    if (t)
        printf("\n");
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int st, en, s;
    l = 0;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        memset(p, -1, sizeof(p)), num = 0;
        while (m--) {
            scanf("%d %d %d", &st, &en, &s);
            add(st, en, s);
            add(en, st, s);
        }
        spfa();
    }
    return 0;
}