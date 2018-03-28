#include<bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5+7;
typedef  long long ll;
int main(){
    int dp[maxn];
    int a[maxn];
    string str;
    getline(cin,str);
    int len = str.length();
    for(int i = 0;i < len;i++){
        a[i] = str[i] - 'a';
        dp[i] = 1;
    }
    int ans = 0;
    for(int i = 1;i < len;i++){
        for(int j = 0;j < i;j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans,dp[i]);
    }
    printf("%d\n",26-ans);

    return 0;
}