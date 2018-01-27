#include <iostream>
using namespace std;

const int kMaxn = 100 + 5;

int a[kMaxn];

int main() {
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    m = m % n;
    for(int i = n - m + 1; i <= n; i++)
        cout << a[i] << " ";
    for(int i = 1; i <= n - m - 1; i++)
        cout << a[i] << " ";
    cout << a[n - m] << endl;
    return 0;
}
