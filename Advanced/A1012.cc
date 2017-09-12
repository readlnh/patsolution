/*注意，排名并列应该1、1、3、4、5，而不是1、1、2、3、4，否则会有一个测试点不过*/
#include <bits/stdc++.h>
using namespace std;

const int kMaxn = 2000 + 10;
const int kInf = 0x3f3f3f3f;

struct Stu {
    string name;
    int C,M,E,A;
    int br;
    char bc;
} a[kMaxn];

bool cmpc(Stu x, Stu y) {
    return x.C > y.C;
};

bool cmpm(Stu x, Stu y) {
    return x.M > y.M;
};

bool cmpe(Stu x, Stu y) {
    return x.E > y.E;
};

bool cmpa(Stu x, Stu y) {
    return x.A > y.A;
};

int main() {
    int n,m;
    cin >> n >> m;
    if(n == 0) {
        while(m--) {
            int x;
            cin >> x;
            cout << "N/A" << endl;
        }
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        getchar();
        cin >> a[i].name >> a[i].C >> a[i].M >> a[i].E;
        a[i].A = (a[i].C + a[i].M + a[i].E) / 3;
        a[i].br = kInf;
    }
    a[0].A = a[0].C = a[0].M = a[0].E = -1;
    sort(a + 1, a + 1 + n, cmpa);
    int r = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i].A != a[i - 1].A) r = i;
        if(i < a[i].br) {
            a[i].br = r;
            a[i].bc = 'A';
        }
    }
    sort(a + 1, a + 1 + n, cmpc);
    for(int i = 1; i <= n; i++) { 
        if(a[i].C != a[i - 1].C) r = i;
        if(r < a[i].br) {
            a[i].br = r;
            a[i].bc = 'C';
        }
    }
    sort(a + 1, a + 1 + n, cmpm);
    for(int i = 1; i <= n; i++) { 
        if(a[i].M != a[i - 1].M) r = i;
        if(r < a[i].br) {
            a[i].br = r;
            a[i].bc = 'M';
        }
    }
    sort(a + 1, a + 1 + n, cmpe);
    for(int i = 1; i <= n; i++) { 
        if(a[i].E != a[i - 1].E) r = i;
        if(r < a[i].br) {
            a[i].br = r;
            a[i].bc = 'E';
        }
    }
    for(int i = 1; i <= m; i++) {
        getchar();
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 1; i <= n; i++) {
            if(s == a[i].name) {
                flag = true;
                cout << a[i].br << " " << a[i].bc << endl;
            }
        }
        if(!flag) cout << "N/A" << endl;
    } 
    return 0;
}
