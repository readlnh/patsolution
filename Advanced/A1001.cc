#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int c = a + b;
    if(c < 0) {
        printf("-");
        c = -c;
    }
    //printf("%d\n", c);
    vector<int>x;
    if(c < 100) {
        printf("%d\n", c);
        return 0;
    }
    while(c) {
        x.push_back(c % 10);
        c = c / 10;
    }
    int cnt = 0;
    for(int i = x.size() - 1; i >= 1; i--) {
        printf("%d", x[i]);
        if(i % 3 == 0) printf(",");
    }      
    printf("%d\n", x[0]);
    return 0;
}
