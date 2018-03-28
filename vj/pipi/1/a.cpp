#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;
int a[maxn];

bool cmp(int x, int y) {
    return x > y;
}

int main() {

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    a[5] = inf;
    sort(a, a + 5, cmp);

    int ans = -inf;
    int ans1 = 0;
    for (int i = 1; i < 5; i++) {
        ans1 = a[i - 1];
        bool flag = false;
        int num = 0;
        while (a[i - 1 + num] == a[i + num] && num < 2) {
            ans1 += a[i];
            flag = true;
            num++;
        }
        i += num;
        if (flag)
            ans = max(ans1, ans);
    }
    if (ans == -inf)
        printf("%d", sum);
    else
        printf("%d", sum - ans);

    return 0;
}