/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enetr a number: ";
    cin >> n;

    for( i=1; i<=n; i++){
        char p ='A'-i;
        for( j=1; j<=i; j++){
            cout << p;
            p++;  
        }
        cout << endl;
    }
    return 0;
}