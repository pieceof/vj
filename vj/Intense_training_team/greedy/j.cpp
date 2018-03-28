#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>

using namespace std;
const int inf = 0x3f3f3f3f;
const int MAX = (int) 1e6 + 7;
typedef long long ll;


multiset<int> wa;
multiset<int> tle;
multiset<int>::iterator it;
int t[MAX], p[MAX];
int main() {

    int i, k, n, w;
    scanf("%d %d %d", &n, &w, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &t[i]);
    int ctime = 0, cnum = 0, l = 0, r = 0, csum = 0, ans = 0;
    while (r < n) {
        wa.insert(t[r]);
        ctime += (t[r] + 1) / 2;
        if (wa.size() > w) {
            tle.insert(*(wa.begin()));
            ctime += *(wa.begin()) / 2;
            wa.erase(wa.begin());
        }
        csum += p[r++];
        while (l <= r && ctime > k) {
            if (t[l] >= *(wa.begin())) {
                wa.erase(wa.find(t[l]));
                ctime -= (t[l] + 1) / 2;
                if (tle.size()) {
                    it = tle.end();
                    it--;
                    wa.insert(*it);
                    ctime -= *it / 2;
                    tle.erase(it);
                }
            } else {
                tle.erase(tle.find(t[l]));
                ctime -= t[l];
            }
            csum -= p[l++];
        }
        ans = max(ans, csum);
    }
    printf("%d\n", ans);
    return 0;
}
