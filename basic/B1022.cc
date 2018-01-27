#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> d;
    c = a + b;
    vector<int>v;
    if(c == 0) v.push_back(c);
    while(c) {
        v.push_back(c % d);
        c = c / d;        
    }
    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    cout << endl;
    return 0;
}
