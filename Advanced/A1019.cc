/*把n转成b进制后判断是否回文*/
#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 1e9 + 5;

int a[kMaxn];

int change(int n,int b) {
    int l = 0;
    if(n == 0) {
        l = 1;
        a[l] = 0;
        return l;
    }   
    while(n) {
        a[++l] = n % b;
        n = n / b;
    }
    return l;
}

int main() {
    int n, b;
    cin >> n >> b;
    int l = change(n, b);
    bool f = true;
    for(int i = 1; i <= l / 2; i++) 
        if(a[i] != a[l - i + 1]) {
            cout << "No" << endl;
            f = false;
            break;
        }
    if(f) cout << "Yes" << endl;
    for(int i = l; i > 1; i--) 
        cout << a[i] << " ";
    cout << a[1] << endl;
    return 0;
}
