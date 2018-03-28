#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int MAX = (int) 1e3 + 7;
typedef long long ll;

int sum, n, m;
int father[1000];

void makeset(int x) {
    for (int i = 1; i <= x; i++)
        father[i] = i;
}

int findset(int x) {
    if (x != father[x])
        father[x] = findset(father[x]);
    return father[x];
}

void Union(int a, int b) {
    int x = findset(a);
    int y = findset(b);
    if (x == y)
        return;
    sum = sum - 1;
    father[y] = x;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++) {
        scanf("%d%d", &n, &m);
        sum = n;
        makeset(n);
        int first, second;
        for (int i = 1; i <= m; i++) {
            scanf("%d%d", &first, &second);
            Union(first, second);
        }
        printf("%d\n", sum);
        getchar();
    }
    return 0;

}  