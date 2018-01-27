#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int xx,yy;
    xx = yy = 0;
    while(n--) {
        int a,b,x,y;
        cin >> a >> x >> b >> y;
        if(x == a + b && y != a + b) 
            xx++;
        else if(x != a + b && y == a + b)
            yy++;
    }
    cout << yy << " " << xx << endl;
    return 0;
}
