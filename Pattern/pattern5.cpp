// Nunumeric Palindrome Equilatral Pyramid

// Numeric Hollow Inverted Half Pyramid

#include<iostream>
using namespace std;

int main(){
     
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int row=0; row<n; row++){
        int display = 0;
        for( int col=0; col< 2*n-row-1 ; col++){
            display += 1;
            cout << display << " ";
        }
        cout << endl;
    }
}