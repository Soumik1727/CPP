#include<iostream>
using namespace std;

void printPrime( int n){
    cout << "2 ";
        for(int i=2; i<n; i++){
            int set = 0;
            for( int j=2; j<i; j++){
                if( i%j == 0){
                    set = 0;
                    break;
                }
                else{
                    set = 1;
                }
            }
            if(set == 1){
                cout << i << " ";
            }
        }
        return;
    }

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    printPrime(number);

    return 0;
}