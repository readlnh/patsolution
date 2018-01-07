/*三个数组分别表示列和对角线*/
#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 1000 + 5;

bool a[kMaxn],b[2 * kMaxn],c[2 * kMaxn];
int w[kMaxn];

int main() {
    int K;
    cin >> K;
    while(K--) {
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++) 
            cin >> w[i];
        memset(a, false, sizeof(a));
        memset(b, false, sizeof(b));
        memset(c, false, sizeof(c));
        bool f = true;
        for(int i = 1; i <= n; i++) {
            if(a[w[i]] || b[i + w[i]] || c[i - w[i] + n]) {
                cout << "NO" << endl;
                f = false;
                break;
            }
            a[w[i]] = b[i + w[i]] = c[i - w[i] + n] = true;
        }
        if(f) cout << "YES" << endl;
    } 
    return 0;
}
