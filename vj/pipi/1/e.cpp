#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {
    ll n, ice;
    scanf("%lld%lld", &n, &ice);
    char ch;
    ll ans = 0,num = 0;
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%c", &ch);
        scanf("%lld", &num);
        if (ch == '-') {
            if (ice >= num) {
                ice -= num;
            } else {
                ans++;
            }
        } else {
            ice += num;
        }
    }

    printf("%lld %lld\n", ice, ans);
    return 0;
}

