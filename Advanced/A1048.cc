#include <bits/stdc++.h>
using namespace std;

int f[1000 + 5];
int a[100000 + 5];

int main() {
    int n, m;
    cin >> n >> m;
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i++) {
        f[a[i]]--;
        if(f[m - a[i]] > 0) {
            //cout << f[m - a[i]] << endl;
            cout << a[i] << " " << m - a[i] << endl;
            return 0;
        }
        f[a[i]]++;
    }
    cout << "No Solution" << endl;
    return 0;
}
