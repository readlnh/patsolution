/*很就没写代码，把判素数写错了，查了一晚上。。。。*/
#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int x) {
    //if(x == 2) return true; 
    if(x <= 1) return false;
    for(int i = 2; i <= sqrt(x); i++) 
        if(x % i == 0) 
            return false;
    return true;
}


int f(int n, int d) {
    int a[100];
    memset(a, 0, sizeof(a));
    int l = 0;
    while(n) {
        a[++l] = n % d;
        n = n / d;
    }
    int x = 0;
    int s = 1;
    for(int i = l; i >= 1; i--) {
        x += s * a[i];
        s = s * d;
    }
    return x;
}

int main() {
    int n,d;
    //cout << IsPrime(2);
    while(cin >> n, n >= 0) {
        cin >> d;
        //cout << f(n, d) << endl;
        if(IsPrime(n) && IsPrime(f(n, d)))
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}
