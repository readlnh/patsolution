#include <iostream>
#define ll long long
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int ncase = 1; ncase <= T; ncase++) {
        cout << "Case #" << ncase << ": ";
        ll a, b, c;
        cin >> a >> b >> c;
        if(a + b > c) 
            cout << "true" << endl;
        else 
            cout << "false" << endl;
    }
    return 0;
}
