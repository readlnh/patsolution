#include <bits/stdc++.h>
using namespace std;

bool f[300];

int main() {
    string s;
    getline(cin, s);
    string ss;
    getline(cin, ss);
    int ls = ss.length();
    memset(f, false, sizeof(f));
    for(int i = 0; i < ls; i++) {
        f[ss[i]] = true;
    }
    int l = s.length();
    for(int i = 0; i < l; i++) 
        if(!f[s[i]])
            cout << s[i];
    cout << endl;
    return 0;
}
