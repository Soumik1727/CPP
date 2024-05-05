#include<iostream>
#include<cmath>
using namespace std;
       
        //division method
int binaryToDecimal(int n){
    int decimal = 0;
    int i=0;
    while(n>0){
        int bit = n%10;
        decimal = decimal + bit*pow(2,i++);
        n /= 10;
    }
    return decimal;
}

int main(){

    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    int decimal = binaryToDecimal(n);
    cout << "Decimal value of " << n << " is: "<<decimal;

    return 0;
}