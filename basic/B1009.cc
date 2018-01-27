#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str,buff;
    getline(cin, str);
    stringstream ss(str);
    vector<string>v;
    while(ss >> buff) {
        v.push_back(buff);
    }
    for(int i = v.size() - 1; i > 0; i--)
       cout << v[i] << " ";
   cout << v[0] << endl; 
    return 0;
}
