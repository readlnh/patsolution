#include <bits/stdc++.h>
using namespace std;

int f[300];

int main() {
    string s;
    cin >> s;
    int l = s.length();
    memset(f, 0, sizeof(f));
    for(int i = 0; i < l; i++) 
        f[s[i]]++;
    cin >> s;
    l = s.length();
    int miss = 0;
    bool fl = true;
    for(int i = 0; i < l; i++)
        if(f[s[i]] <= 0) {
            fl = false;
            miss++;
        }
        else f[s[i]]--;
    if(!fl) {
        cout << "No " << miss << endl;
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < 300; i++)
        sum += f[i];
    cout << "Yes " << sum << endl;
    return 0;
}
