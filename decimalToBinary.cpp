// Decimal To Binary  //  Division method   
// Decimal To Binary  //  Division method  

#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int num){
    int binaryNo = 0;
    int i = 0;
    while(num>0){
        int bit = num % 2 ;
        binaryNo = bit*pow (10,i++) + binaryNo ;
        num /= 2 ;
    }
    return binaryNo;
}

int main(){
    int num;
    cout << "Enter a Decimal number: ";
    cin >> num ;

    int binary = decimalToBinary(num);
    cout << "The binary of " << num << " is " << binary << endl;
    return 0;
}