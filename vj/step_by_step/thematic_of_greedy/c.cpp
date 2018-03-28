#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
struct rec {
    int x, y, id;
    double v;
};
rec a[maxn];

bool cmp(rec x, rec y) {
    return x.v > y.v;
}

int main() {
    int n;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif

    while(~scanf("%d", &n)) {
        memset(a,0,sizeof(a));
        int sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &a[i].x, &a[i].y);
            a[i].v = 1.0 * a[i].x / a[i].y;
            a[i].id = i;
            sum += a[i].x;
        }

        sort(a, a + n, cmp);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += sum * a[i].y;
            sum -= a[i].x;
        }


        printf("%d\n", ans);
    }
    return 0;
}

