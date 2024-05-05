#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for( int row=0; row<n; row++){
        if( row < n/2){
            for( int col=0; col<row+1; col++){
                cout << "*";
            }
        }
    }
}