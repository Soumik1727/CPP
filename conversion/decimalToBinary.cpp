#include<iostream>
#include<cmath>
using namespace std;
       
        //division method
int decimalToBinary(int n){
    int binary = 0;
    int i=0;
    while(n>0){
        int bit = n % 2 ;
        binary = binary + bit*pow(10,i++);
        n = n / 2;
    }
    return binary;
}

int main(){

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary = decimalToBinary(n);
    cout << "Binary value of " << n << " is: "<< binary;

    return 0;
}