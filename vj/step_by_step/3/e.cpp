#include<bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int MAXN = 1e7 + 7;
typedef long long ll;


int prime[MAXN];
bool vis[MAXN];
int phi[MAXN];

void Prime(int n) {
    int cnt = 0;
    memset(vis, 0, sizeof(vis));
    for (int i = 2; i < n; i++) {
        if (!vis[i]) {
            prime[cnt++] = i;
            phi[i] = i - 1;
        }
        for (int j = 0; j < cnt && i * prime[j] < n; j++) {
            ll k = i * prime[j];
            vis[k] = 1;
            if (i % prime[j] == 0) {
                phi[k] = phi[i] * prime[j];
                break;
            } else
                phi[k] = phi[i] * (prime[j] - 1);

        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Prime(MAXN);

    for (int i = 0; i < MAXN; i++) {
        if (prime[prime[i] - 1] >= n) {
            printf("%d\n", prime[prime[i] - 1]);
            return 0;
        }
    }

    return 0;
}