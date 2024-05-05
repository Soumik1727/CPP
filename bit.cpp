#include<iostream>
using namespace std;

int main(){
    unsigned char ch = 97 ;
    unsigned char dh = 0;
    unsigned int dhint = 0;

    dh = ~ch;
    dhint = ~ch;

    cout << "dh: " << dh << endl;
    cout << "dhint: " << dhint << endl;

    return 0;
}