#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int s[maxn];

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n, i, j;
    ll ans;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &s[i]);
    sort(s, s + n);
    ans = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++)
            ans += s[i] - s[j];
        for (j = i + 1; j < n; j++)
            ans += s[j] - s[i];
    }
    printf("%lld\n", ans);

    return 0;
}
