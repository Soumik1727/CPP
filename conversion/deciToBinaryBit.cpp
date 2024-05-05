#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary( int n){
    // bitwise method
    int binaryNo = 0;
    int i = 0;
    while(n>0){
        int bit = ( n & 1);
        binaryNo = binaryNo + bit*pow(10,i++);
        n = n >> 1;
    }
    return binaryNo;
}

int main(){
    cout << "Enter a decimal number: ";
    int n;
    cin >> n ;

    int binaryNo = decimalToBinary(n);
    cout << "Binary of " << n << " is: " << binaryNo;
    return 0;
}