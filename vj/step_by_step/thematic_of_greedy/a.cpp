#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

struct rec {
    ll x, id;

    bool operator<(const rec &a) const {
        return x < a.x;
    }
};

rec c[maxn];
ll ans1[maxn];

int main() {
    priority_queue<rec> que;
    ll n, k;


    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &c[i].x);
        c[i].id = i;
    }


    for (int i = 1; i <= k; i++) {
        que.push(c[i]);
    }


    ll ans = 0;
    for (int i = k+1; i <= n; i++) {
        que.push(c[i]);
        rec q = que.top();
        que.pop();
        ans1[q.id] = i;
        ans += q.x * (i - q.id);
    }
    for (int i = n + 1; i <= n + k; i++) {
        rec q = que.top();
        que.pop();
        ans1[q.id] = i;
        ans += q.x * (i - q.id);
    }


    printf("%lld\n", ans);
    for (int i = 1; i <= n; i++) {
        printf("%d", ans1[i]);
        i == n ? printf("\n") : printf(" ");
    }


    return 0;
}