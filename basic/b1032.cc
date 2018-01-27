#include <iostream>
#include <cstring>
using namespace std;

const int kMaxn = 1e5 + 5;

int a[kMaxn];

int main() {
    int n;
    cin >> n;
    memset(a, 0, sizeof(a));
    int maxid;
    int maxnum = -1;
    while(n--) {
        int id, num;
        cin >> id >> num;
        a[id] += num;
        if(a[id] > maxnum) {
            maxnum = a[id];
            maxid = id;
        }
    }
    cout << maxid << " " << maxnum << endl;
    return 0;
}
