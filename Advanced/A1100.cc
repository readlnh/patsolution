/*实在太烦，先放一下。。。*/
#include <bits/stdc++.h>
using namespace std;

string s[100 + 5];

map<string, int>mp1;
map<string, int>mp2;
map<int, string>g1;
map<int, string>g2;

int main() {
    mp1["tret"] = 0;
    mp1["jan"] = 1, mp1["feb"] = 2, mp1["mar"] = 3, 
    mp1["apr"] = 4, mp1["may"] = 5, mp1["jun"] = 6, 
    mp1["jly"] = 7, mp1["aug"] = 8, mp1["sep"] = 9, 
    mp1["oct"] = 10,mp1["nov"] = 11,mp1["dec"] = 12;
    mp2["tret"] = 0;
    mp2["tam"] = 1, mp2["hel"] = 2, mp2["maa"] = 3, 
    mp2["huh"] = 4, mp2["tou"] = 5, mp2["kes"] = 6, 
    mp2["hei"] = 7, mp2["elo"] = 8, mp2["syy"] = 9, 
    mp2["lok"] = 10,mp2["mer"] = 11,mp2["jou"] = 12;

    g1[0] = "tret";
    g1[1] = "jan", g1[2] = "feb", g1[3] = "mar", 
    g1[4] = "apr", g1[5] = "may", g1[6] = "jun", 
    g1[7] = "jly", g1[8] = "aug", g1[9] = "sep", 
    g1[10] = "oct", g1[11] = "nov", g1[12] = "dec";

    g2[1] = "tam", g2[2] = "hel", g2[3] = "maa", g2[4] = "huh", 
    g2[5] = "tou", g2[6] = "kes", g2[7] = "hei", g2[8] = "elo", 
    g2[9] = "syy", g2[10] = "lok", g2[11] = "mer", g2[12] = "jou";

    int n;
    cin >> n;
    char c;
    while(n--) {
        if(c != '\n')
            getchar();
        c = 0;
        cin >> s[1];
        if(s[1][0] >= '0' && s[1][0] <= '9') {
            int l = s[1].length();
            int x = 0;
            int b = 1;
            for(int i = 0; i < l; i++) {
                x = x * b + s[1][i] - '0';
                b = b * 10;
            }
            if(x == 0) {
                cout << "tret" << endl;
                continue;
            }
            int a[10];
            int ll = 0;
            while(x) {
                a[++ll] = x % 13;
                x = x / 13;
            }
            if(ll == 2) cout << g2[a[2]] << " ";
            cout << g1[a[1]] << endl;
        }
        else {
            int a[10];
            int ll = 0;
            c = getchar();
            if(c == ' ') {
                cin >> s[2];
                a[1] = mp2[s[1]];
                a[2] = mp1[s[2]];
                ll = 2;
            }
            else if(mp1.count(s[1]) == 0) {
                a[1] = mp2[s[1]];
                a[2] = 0; 
                ll = 2;
            }
            else {
                a[1] = mp1[s[1]];
                ll = 1;
            }
            //cout << a[1] << a[2] << endl;
            int b = 1;
            int ans = 0;
            for(int i = 1; i <= ll; i++) {
                ans = ans * b + a[i];
                b = b * 13;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
