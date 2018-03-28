#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int a,b;
    while (~scanf("%d%d", &a, &b)) {
        printf("%d\n", a + b);
    }
    return 0;
}
