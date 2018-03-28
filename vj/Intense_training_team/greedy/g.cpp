#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

struct Node {
    int w, h;

    bool operator<(const Node &rhs) const {
        return w < rhs.w;
    }
};

Node A[maxn], B[maxn];

multiset<int> ms;
multiset<int>::iterator it;
int n;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &A[i].w, &A[i].h);
        }
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &B[i].w, &B[i].h);
        }

        sort(A, A + n);
        sort(B, B + n);
        int ans = 0;
        ms.clear();

        for (int i = 0, j = 0; i < n; ++i) {
            while (j < n && A[i].w >= B[j].w) {
                ms.insert(B[j++].h);
            }
            if (ms.empty()) continue;
            it = ms.upper_bound(A[i].h);
            if (it != ms.begin()) {
                ms.erase(--it);
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
