#include<iostream>
using namespace std;

bool checkPrime(int num){
    for( int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num; 
    cout << "Enter a number: ";
    cin >> num;

    for( int i=2; i<num; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout << i <<" ";
        }
    }
    // bool isPrime = checkPrime(num);
    // if(isPrime){
    //     cout << "Prime";
    // }
    // else{
    //     cout << "Not prime.";
    // }

    return 0;
    }