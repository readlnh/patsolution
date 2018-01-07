#include <bits/stdc++.h>
using namespace std;

string s1,s2;

bool f[300], f2[300];

vector<char>ans;

int main() {
    memset(f, false, sizeof(f));
    memset(f2, false, sizeof(f2));
    cin >> s1;
    cin >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    for(int i = 0; i < l2; i++) {
        if(s2[i] >= 'a' && s2[i] <= 'z') 
            f[s2[i] - 'a' + 'A'] = true;
        else f[s2[i]] = true;
    }
    for(int i = 0; i < l1; i++) {
        char t;
        if(s1[i] >= 'a' && s1[i] <= 'z')
            t = s1[i] - 'a' + 'A';
        else 
            t = s1[i];
        if(!f[t] && !f2[t]) {
            f2[t] = true;
            ans.push_back(t);
        }
    }
    for(int i = 0; i < ans.size(); i++) 
        cout << ans[i];
    cout << endl;
    return 0;
}
