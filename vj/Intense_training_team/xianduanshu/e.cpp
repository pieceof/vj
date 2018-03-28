#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x, 0, sizeof(x))
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1


int tree[maxn];
int lazy[maxn];

void push_up(int rt) {
    tree[rt] = tree[rt << 1] + tree[rt << 1 | 1];
}

void push_down(int rt, int m) {
    if (lazy[rt]) {
        lazy[rt << 1] = lazy[rt << 1 | 1] = lazy[rt];
        tree[rt << 1] = (m - (m >> 1)) * lazy[rt];
        tree[rt << 1 | 1] = (m >> 1) * lazy[rt];
        lazy[rt] = 0;
    }
}

void build(int l, int r, int rt) {
    if (l == r) {
        tree[rt] = 1;
        return;
    }
    int mid = (l + r) >> 1;
    build(lson);
    build(rson);
    push_up(rt);
}

void updata(int L, int R, int x, int l, int r, int rt) {
    if (L <= l && r <= R) {
        tree[rt] = x * (r - l + 1);
        lazy[rt] = x;
        return;
    }
    push_down(rt, (r - l + 1));
    int mid = (l + r) >> 1;
    if (L <= mid) updata(L, R, x, lson);
    if (mid + 1 <= R) updata(L, R, x, rson);
    push_up(rt);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int T, n, q, x, y, z;
    scanf("%d", &T);
    int num = 0;
    while (T--) {
        clr(tree);
        clr(lazy);
        scanf("%d%d", &n, &q);
        build(1, n, 1);
        for (int i = 1; i <= q; ++i) {
            scanf("%d%d%d", &x, &y, &z);
            updata(x, y, z, 1, n, 1);
        }
        printf("Case %d: The total value of the hook is %d.\n", ++num, tree[1]);


    }


    return 0;
}