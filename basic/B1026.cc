#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int c1,c2;
    //scanf("%d %d", &c1, &c2);
    cin >> c1 >> c2;
    int t = (c2 - c1 + 50) / 100;
    int ss = t % 60;
    t = t / 60;
    int mm = t % 60;
    t = t / 60;
    int hh = t;
    //printf("%02d:%02d:%02d\n", hh, mm, ss);
    cout.fill('0');
    //cout.width(2);
    cout << setw(2) << hh << ":" << setw(2) << mm << ":" << setw(2) << ss << endl;
    return 0;
}
