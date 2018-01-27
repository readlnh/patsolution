#include <iostream>
using namespace std;

int res(int x, int y) {
    int ans = 0;
    while(x) {
        if(x % 10 == y) 
            ans = ans * 10 + y;
        x = x / 10;
    }
    return ans;
}

int main() {
    int a,da,b,db;
    cin >> a >> da >>b >>db;
    cout << res(a, da) + res(b, db) << endl;
    return 0;
}
