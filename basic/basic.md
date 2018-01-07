# 1006 换个格式输出整数
这题其实很奇葩，用“12...n”来表示个位数字n，一开始死活没看懂，以为是12～n，半天没反应过来。。。

##代码
```
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;
    for(int i = 1; i <= a; i++)
        cout << "B";
    for(int i = 1; i <= b; i++)
        cout << "S";
    for(int i = 1; i <= c; i++)
        cout << i;
    cout << endl;
    return 0;
}
```


