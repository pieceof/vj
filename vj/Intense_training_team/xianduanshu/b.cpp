#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x,0,sizeof(x));
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1

int tree[maxn], A[maxn];

void push_up(int rt) {
    tree[rt] = max(tree[rt << 1], tree[rt << 1 | 1]);
}

void build(int l, int r, int rt) {
    if (l == r) {
        tree[rt] = A[l];
        return;
    }

    int mid = (l + r) >> 1;
    build(lson);
    build(rson);
    push_up(rt);
}

void updata(int a, int b, int l, int r, int rt) {
    if (l == r) {
        tree[rt] = b;
        return;
    }

    int mid = (l + r) >> 1;
    if (a <= mid)
        updata(a, b, lson);
    else
        updata(a, b, rson);
    push_up(rt);
}

int query(int L, int R, int l, int r, int rt) {
    if (L <= l && r <= R) {
        return tree[rt];
    }

    int ans = 0;
    int mid = (l + r) >> 1;

    if (L <= mid)
        ans = max(ans, query(L, R, lson));
    if (R > mid)
        ans = max(ans, query(L, R, rson));

    return ans;

}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n, m, a, b;
    char ch;
    while (~scanf("%d%d",&n,&m)) {
        clr(tree);
        clr(A);
        for (int i = 1; i <= n; ++i) {
            scanf("%d",&A[i]);
        }
        build(1, n, 1);

        for (int i = 0; i < m; ++i) {
            getchar();
            scanf("%c%d%d", &ch, &a, &b);

            if (ch == 'Q') {
                printf("%d\n", query(a, b, 1, n, 1));
            }
            if (ch == 'U') {
                updata(a, b, 1, n, 1);
            }

        }
    }

    return 0;
}
