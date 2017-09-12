#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 1000 + 5;

int f[kMaxn];
int a[kMaxn * kMaxn], b[kMaxn * kMaxn];

int init(int n) {
    for(int i = 1; i <= n; i++)
        f[i] = i;
}

int findf(int x) {
    if(f[x] != x)
        f[x] = findf(f[x]);
    return f[x];
}


int main() {
    int n,m,k;
    cin >> n >> m >> k;
    for(int i = 1; i <= m; i++) 
        cin >> a[i] >> b[i];
    for(int i = 1; i <= k; i++) {
        int x;
        cin >> x;
        init(n);
        for(int j = 1; j <= m; j++) {
            if(x != a[j] && x != b[j]) {
                int fa = findf(a[j]);
                int fb = findf(b[j]);
                if(fa != fb)
                    f[fa] = fb;
            }
        }
        int ans = 0;
        for(int j = 1; j <= n; j++)
            if(f[j] == j)
                ans++;
        cout << ans - 2 << endl;
    }
    return 0;
}
