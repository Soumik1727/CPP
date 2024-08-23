#include <iostream>
#include <string>
#include<typeinfo>

using namespace std;

int main() {
    // Initialize a string with a single character
    string s = "1";
    cout << typeid(s[0]).name() << endl;        // char
    cout << int(s[0]) << endl;                  // 49
    cout << typeid(s[0] - '0').name() << endl;  // int
    cout << int(s[0] - '0') << endl;            // 1
    cout << char((s[0] - '0') + '0') << endl;   // '1'
    cout << typeid(char((s[0] - '0') + '0')).name() << endl;     // char
    cout << "(s[0] - '0'): " << (s[0] - '0')<< endl;
    cout << "Type: " << typeid((s[0] - '0')).name() << endl;
    int ascii = 50;
    cout <<char(ascii) << endl;     // 2

    return 0;
}
