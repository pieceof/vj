#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x, 0, sizeof(x))
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1

int tree[maxn], a[maxn];

void push_up(int rt) {
    tree[rt] = tree[rt << 1] + tree[rt << 1 | 1];
}

void build(int l, int r, int rt) {
    if (l == r) {
        tree[rt] = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(lson);
    build(rson);
    push_up(rt);
}

void updata(int p, int d, int l, int r, int rt) {
    if (l == r) {
        tree[rt] += d;
        return;
    }
    int mid = (l + r) >> 1;
    if (p <= mid)
        updata(p, d, lson);
    else
        updata(p, d, rson);
    push_up(rt);
}

int query(int L, int R, int l, int r, int rt) {
    if (L <= l && r <= R) {
        return tree[rt];
    }
    int ans = 0;
    int mid = (l + r) >> 1;
    if (L <= mid)
        ans += query(L, R, lson);
    if (R > mid)
        ans += query(L, R, rson);
    return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int T, n;
    scanf("%d", &T);
    int num = 0;
    while (T--) {

        clr(tree);
        clr(a);
        string str;
        int a1, b1;
        printf("Case %d:\n", ++num);

        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }

        build(1, n, 1);

        while (cin >> str && str != "End" && ~scanf("%d%d", &a1, &b1)) {

            if (str == "Query") {
                printf("%d\n", query(a1, b1, 1, n, 1));
            }

            if (str == "Add") {
                updata(a1, b1, 1, n, 1);
            }

            if (str == "Sub") {
                updata(a1, -b1, 1, n, 1);
            }
        }

    }
    return 0;
}