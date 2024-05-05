#include<iostream>
using namespace std;

void findFactorial( int n){
        int factorial = 1;
        for( int i=1; i<=n; i++){
            factorial = factorial*i;
        }
        cout << "The factorial of: " << factorial << endl;
        return;
    }

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    findFactorial(number);

    return 0;
}