#include <iostream>
#include <string>
using namespace std;

string res(string x, string y) {
    int lx = x.length();
    int ly = y.length();
    string ans = "";
    while(lx > 0 && ly > 0) {
        lx--;
        ly--;
        //cout << lx << x[lx] << y[ly] << x[lx - 1] << y[ly - 1] << endl;
        if(x[lx] != y[ly])
            return ans;
        ans = x[lx] + ans;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    getchar();
    string t,a,b;
    getline(cin, t);
    //cout << t << endl;
    n--;
    while(n--) {
        //getchar();
        getline(cin, a);
        t = res(t, a);
    }
    if(t == "") cout << "nai" << endl;
    else cout << t << endl;
}

