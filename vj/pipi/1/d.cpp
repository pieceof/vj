#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
int a[maxn];
int main() {

    int min1 = inf,min2 = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
        if (i != 1) {
            min1 = min(min1, a[i]);
        }
    }
    a[0] -= min1;
    min2 = min(a[0], a[1]);
    ll ans = 0;
    ans = min1*256+min2*32;
    printf("%lld",ans);


    return 0;
}
