/*稍微注意下细节。。。纯模拟*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int n1,n2;
    for(int i = 3; i < n; i++) {
        if( ((n + 2) - i) % 2 == 0 &&  ((n + 2) - i) / 2 <= i) {
            n2 = i;
            n1 = ((n + 2) - i) / 2;
            break;
        }
    }
    int cnt = 0;
    for(int i = 1; i < n1; i++) {
        cout << s[cnt];
        for(int k = 1; k <= n2 - 2; k++)
            cout << " ";
        cout << s[n - cnt - 1] << endl;
        cnt++;
    }
    for(int i = 1; i <= n2; i++)
        cout << s[cnt++];
    cout << endl;
    return 0;
}
