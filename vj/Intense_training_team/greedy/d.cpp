#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
#define DD double
typedef long long ll;

struct rec {
    DD start, end;
};
rec num[1010];

bool cmp(rec a, rec b) {
    return a.end < b.end;
}

int main() {
    int N, k = 1;
    DD d;
    bool flag;
    while (scanf("%d%lf", &N, &d), N || d) {
        DD x, y;
        flag = true;
        for (int i = 0; i < N; i++) {
            scanf("%lf%lf", &x, &y);
            if (!flag) continue;
            if (y > d) {
                flag = false;
                continue;
            }
            num[i].start = x - sqrt(d * d - y * y);
            num[i].end = x + sqrt(d * d - y * y);
        }
        printf("Case %d: ", k++);
        if (!flag) {
            printf("-1\n");
            continue;
        }
        sort(num, num + N, cmp);
        int ans = 0;
        DD temp = -inf;
        for (int i = 0; i < N; i++) {
            if (temp < num[i].start)
                ans++, temp = num[i].end;
        }
        printf("%d\n", ans);
    }
    return 0;
}