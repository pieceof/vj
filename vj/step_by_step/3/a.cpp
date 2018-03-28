#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {
    int T;
    int a;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &a);
        if (a == 1) {
            printf("1\n");
            continue;
        }
        int b = a * 2;
        double q = sqrt(1 + 4 * b);
        int p = floor((q - 1) / 2);
        int w = p * (p + 1) / 2;

        if (w + 1 == a) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}