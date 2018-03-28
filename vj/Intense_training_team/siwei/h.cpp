#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int a[maxn];

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n;
    int tot, sum;
    while (scanf("%d", &n) == 1) {
        tot = sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] == -1) {
                if (sum != 0) sum--;
                else ans++;
            } else {
                sum += a[i];
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
