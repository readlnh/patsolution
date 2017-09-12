#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct pe{
    string name;
    string id;
    int score;
};

int main() {
    int n;
    cin >> n;
    pe maxp,minp,t;
    maxp.score = 0;
    minp.score = 1000000;
    for(int i = 1; i <= n; i++) {
        getchar();
        cin >> t.name >> t.id >> t.score;
        if(t.score > maxp.score) maxp = t;
        if(t.score < minp.score) minp = t;
    }
    cout << maxp.name << " " << maxp.id << endl;
    cout << minp.name << " " << minp.id << endl;
    return 0;
}
