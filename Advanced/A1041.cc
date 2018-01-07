#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 100000 + 5;
const int kMaxm = 10000 + 5;

int cnt[kMaxm];
int a[kMaxn];

int main() {
    int n;
    memset(cnt, 0, sizeof(cnt));
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 1; i <= n; i++) {
        if(cnt[a[i]] == 1) {
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
