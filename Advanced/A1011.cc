#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double w,t,l;
    double r = 1.0;
    for(int i = 1; i <= 3; i++) {
        scanf("%lf %lf %lf", &w, &t, &l);
        double m = max(w,t);
        m = max(m, l);
        if(w == m) printf("W ");
        else if(t == m) printf("T ");
        else if(l == m) printf("L ");
        r = r * m;
    }
    r = (r * 0.65 - 1) * 2;
    printf("%.2lf\n", r);
    return 0;
}
