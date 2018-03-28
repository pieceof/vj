#include<bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

struct Node {
    int day, cost;
} node[maxn];
int n;
int f[maxn];

int cmp(Node a, Node b) {
    return a.cost < b.cost;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &node[i].day);
            if (node[i].day > n)
                node[i].day = n;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &node[i].cost);
            sum += node[i].cost;
        }
        sort(node, node + n, cmp);
        memset(f, 0, sizeof(f));
        for (int i = n - 1; i >= 0; i--)
            for (int j = node[i].day; j >= 1; j--)
                if (!f[j]) {
                    f[j] = 1;
                    sum -= node[i].cost;
                    break;
                }
        printf("%d\n", sum);
    }
    return 0;
}

