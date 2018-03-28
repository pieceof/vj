#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

struct rec {
    int s, e;
} a[maxn];

bool cmp(rec a, rec b) {
    return a.s < b.s;
}

int main() {
    int n, l;
    scanf("%d %d", &n, &l);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &a[i].s, &a[i].e);
    sort(a, a + n, cmp);
    int ans = 0;
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (last >= a[i].e)
            continue;
        if (last > a[i].s) {
            int len = a[i].e - last;
            int num = (len + l - 1) / l;
            last += num * l;
            ans += num;
        } else {
            int len = a[i].e - a[i].s;
            int num = (len + l - 1) / l;
            last = a[i].s + num * l;
            ans += num;
        }
    }
    printf("%d\n", ans);
    return 0;
}