#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

int main() {
    int n;
    string str;

    scanf("%d", &n);
    getchar();
    getline(cin, str);
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            ans1++;
        } else {
            ans2++;
        }
    }
    if (ans1 > ans2)
        printf("Anton\n");
    else if (ans1 < ans2)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}

