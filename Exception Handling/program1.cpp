#include<iostream>
using namespace std;

int main(){

    float a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;

    try{
        if( b != 0){
            cout << "Result: " << (a/b);
        }
        else{
            throw((a/b));
        }
    }
    catch(float i){
        cout << "CANNOT DIVIDED BY ZERO.";
    }
}