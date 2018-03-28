#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;
#define clr(x) memset(x, 0, sizeof(x))
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1

ll tree[maxn], lazy[maxn], a[maxn];

void push_up(ll rt) {
    tree[rt] = tree[rt << 1] + tree[rt << 1 | 1];
}

void push_down(ll rt, ll m) {
    if (lazy[rt]) {
        lazy[rt << 1] += lazy[rt];
        lazy[rt << 1 | 1] += lazy[rt];
        tree[rt << 1] += (m - (m >> 1)) * lazy[rt];
        tree[rt << 1 | 1] += (m >> 1) * lazy[rt];
        lazy[rt] = 0;
    }
}


void build(ll l, ll r, ll rt) {
    if (l == r) {
        tree[rt] = a[l];
        return;
    }
    ll mid = (l + r) >> 1;
    build(lson);
    build(rson);
    push_up(rt);
}

void updata(ll L, ll R, ll x, ll l, ll r, ll rt) {
    if (L <= l && r <= R) {
        tree[rt] += x * (r - l + 1);
        lazy[rt] += x;
        return;
    }
    push_down(rt, (r - l + 1));
    ll mid = (l + r) >> 1;
    if (L <= mid) updata(L, R, x, lson);
    if (mid + 1 <= R) updata(L, R, x, rson);
    push_up(rt);
}

ll query(ll L, ll R, ll l, ll r, ll rt) {
    if (L <= l && r <= R) {
        return tree[rt];
    }
    push_down(rt, (r - l + 1));
    ll mid = (l + r) >> 1;
    ll ans = 0;
    if (L <= mid) ans += query(L, R, lson);
    if (mid + 1 <= R) ans += query(L, R, rson);
    return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    ll n, q;
    char ch;
    ll L, R, w;
    while (~scanf("%lld%lld", &n, &q)) {

        clr(tree);
        clr(a);
        clr(lazy);

        for (int i = 1; i <= n; ++i) {
            scanf("%lld", &a[i]);
        }
        build(1, n, 1);
        for (int i = 1; i <= q; ++i) {
            getchar();
            scanf("%c", &ch);
            if (ch == 'Q') {
                scanf("%lld%lld", &L, &R);
                printf("%lld\n", query(L, R, 1, n, 1));
            }
            if (ch == 'C') {
                scanf("%lld%lld%lld", &L, &R, &w);
                updata(L, R, w, 1, n, 1);
            }
        }
    }

    return 0;
}