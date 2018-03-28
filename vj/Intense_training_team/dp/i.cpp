#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<algorithm>

using namespace std;
const int inf = 0x3f3f3f3f;
const int N = (int) 1e3 + 7;
typedef long long ll;
int dp[N][N];
int a[N];
int sum[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    memset(dp,0,sizeof(dp));
    for (int l = 2; l <= n; l++) {
        for (int start = 1; start <= n - l + 1; start++) {
            int end = start + l - 1;
            int min1 = inf;
            for (int k = start; k < end; k++) {
                min1 = min(dp[start][k] + dp[k + 1][end] + sum[end] - sum[start - 1], min1);
            }
            dp[start][end] = min1;
        }
    }
    cout << dp[1][n] << endl;

    return 0;
}