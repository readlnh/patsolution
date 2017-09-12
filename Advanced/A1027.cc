/*把10进制数转成13进制，注意0和个位数*/
#include <bits/stdc++.h>
using namespace std;

char table[] = {'0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C'};

string change(int x) {
    string s;
    s = "";
    if(x == 0) return "00";
    while(x) {
        s = s + table[x % 13];
        x = x / 13;
    }
    if(s.length() < 2) s = s + "0";
    return s;
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    string s = "";
    s = s + change(c) + change(b) + change(a) + "#";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
