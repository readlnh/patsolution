#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;
    for(int i = 1; i <= a; i++)
        cout << "B";
    for(int i = 1; i <= b; i++)
        cout << "S";
    for(int i = 1; i <= c; i++)
        cout << i;
    cout << endl;
    return 0;
}
