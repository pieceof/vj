#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
int a[maxn];

int main() {
    int n, b;
    scanf("%d%d", &n, &b);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    int l, r;
    l = b - 1;
    r = b + 1;
    int ans = 0;
    if (a[b] == 1)
        ans = 1;
    else
        ans = 0;
    while (l >= 1 && r <= n) {
        if ((a[l] + a[r]) == 2) {
            ans += 2;
        }
        l--;
        r++;
    }

    if (l >= 1) {
        for (int i = 1; i <= l; i++) {
            if (a[i] == 1) {
                ans++;
            }
        }
    } else {
        for (int i = r; i <= n; i++) {
            if (a[i] == 1) {
                ans++;
            }
        }
    }
    printf("%d\n", ans);


    return 0;
}

