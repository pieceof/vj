#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

struct rec {
    int x, y;
};
rec data[maxn];

int main() {
    int n, x, y;
    scanf("%d", &n);
    int num = 0;
    memset(data, 0, sizeof(data));
    for (int i = 0; i < n; i++) {
        bool flag = true;
        scanf("%d%d", &x, &y);
        if (y == 0) {
            while (num >= 1) {
                if (data[num].y == 0) {
                    break;
                }
                if (data[num].x > x) {
                    flag = false;
                    break;

                }
                if (data[num].x < x) {
                    data[num].x = 0;
                    data[num].y = 0;
                    num--;
                }
            }
        }
        if (flag) {
            num++;
            data[num].x = x;
            data[num].y = y;
        }
    }
    printf("%d\n", num);

    return 0;
}
