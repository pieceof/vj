#include<iostream>

const int N = 500007;
using namespace std;
int city[N];
int dp[N];//dp[i]保存的是长度为i的最长不降子序列的最小尾元素

//二分查找返回num在dp中的位置
int Search(int dp[], int len, int num) {
    int low = 1, high = len;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (num == dp[mid])return mid;
        else if (num < dp[mid])high = mid - 1;
        else if (num > dp[mid])low = mid + 1;
    }
    return low;
}

int Search1(int dp[], int len, int num) {
    int low = 1, high = len;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (num == dp[mid])return mid;
        else if (num > dp[mid])high = mid - 1;
        else if (num < dp[mid])low = mid + 1;
    }
    return low;
}

int main() {
    int n, T, k;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &k);

        for (int i = 1; i <= n; i++) {
            scanf("%d", &city[i]);
        }
        dp[0] = -1, dp[1] = city[1];
        int len = 1;
        for (int i = 1; i <= n; i++) {
            int j = Search(dp, len, city[i]);
            dp[j] = city[i];
            if (j > len)len++;
        }
        //printf("%d",len);
        if (len + k >= n) {
            printf("A is a magic array.\n");
        } else {

            dp[0] = -1, dp[1] = city[1];
            len = 1;
            for (int i = 1; i <= n; i++) {
                int j = Search1(dp, len, city[i]);
                dp[j] = city[i];
                if (j > len)len++;
            }
            //printf("%d", len);
            if (len + k >= n) {
                printf("A is a magic array.\n");
                continue;
            } else {
                printf("A is not a magic array.\n");
            }
        }
    }
    return 0;
}