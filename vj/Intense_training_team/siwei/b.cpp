#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

int a[1007][1007];

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int n;

    string str1,str2;

    cin >> n;

    getchar();
    getline(cin, str1);
    getline(cin, str2);

    int num=0;
    memset(a,0,sizeof a);

    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            int x = (int) str1[i] - 'a';
            int y = (int) str2[i] - 'a';
            num++;
            a[x][y] = i + 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (a[i][j] && a[j][i]) {
                cout << num - 2 << endl;
                cout << a[i][j] << " " << a[j][i] << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (a[i][j]) {
                for (int k = 0; k < 26; k++) {
                    if (a[i][k]) {
                        cout << num - 1 << endl;
                        cout << a[i][j] << " " << a[i][k] << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << num << endl;
    cout << -1 << " " << -1 << endl;


    return 0;
}