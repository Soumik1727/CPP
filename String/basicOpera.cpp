#include <iostream>
#include <string>
#include<typeinfo>

using namespace std;

int main() {
    
    string s = "1";

    cout << int(s[0]) << endl;                  // 49
    cout << typeid(s[0] - '0').name() << endl;  // int

    cout << (s[0] - '0')<< endl;                   // 1
    cout << int(s[0] - '0') << endl;            // 1
    
    int number = 50;
    cout <<char(number) << endl;     // 2
    string res = to_string(number);
    cout << res << endl;            // 50

    return 0;
}
