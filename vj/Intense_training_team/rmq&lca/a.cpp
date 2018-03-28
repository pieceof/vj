#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<cstring>

using namespace std;
#define MAXN 100000
#define MAXE 100
int h[MAXN], mmax[MAXN][MAXE], mmin[MAXN][MAXE];
int N, Q;
int L, R;

void RMQ_ST() {
    for (int i = 1; i <= N; i++) {
        mmax[i][0] = h[i];
        mmin[i][0] = h[i];
    }
    int end_j = log(N + 0.0) / log(2.0);
    int end_i;
    for (int j = 1; j <= end_j; j++) {
        end_i = N + 1 - (1 << j);
        for (int i = 1; i <= end_i; i++) {
            mmax[i][j] = max(mmax[i][j - 1], mmax[i + (1 << (j - 1))][j - 1]);
            mmin[i][j] = min(mmin[i][j - 1], mmin[i + (1 << (j - 1))][j - 1]);
        }
    }
}

int QueryMax(int L, int R) {

    int k = log(R - L + 1.0) / log(2.0);
    return max(mmax[L][k], mmax[R - (1 << k) + 1][k]);
}

int QueryMin(int L, int R) {

    int k = log(R - L + 1.0) / log(2.0);
    return min(mmin[L][k], mmin[R - (1 << k) + 1][k]);
}

int main() {
    while (scanf("%d%d", &N, &Q) != EOF) {

        for (int i = 1; i <= N; i++) {
            scanf("%d", &h[i]);
        }

        RMQ_ST();
        for (int i = 0; i < Q; i++) {
            scanf("%d%d", &L, &R);
            printf("%d\n", QueryMax(L, R) - QueryMin(L, R));
        }
    }

    return 0;
}
