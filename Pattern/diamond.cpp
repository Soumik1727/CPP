#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows in the Pyramid: ";
    cin >> n;

    int num = n/2;  // if we don't divide ,the num of row in diamond will 2*user input

                // Full Pyramid
                // Full Pyramid
    for( int row=0; row<num; row++){
        for( int col=0; col<num-row-1; col++ ){
            // Space
            cout << " ";
        }
        // star
        for( int col=0; col<row+1; col++ ){
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted full pyramid
    // Inverted full pyramid

    for( int row=0; row<num; row++){
        for( int col=0; col<row; col++ ){
            // Space
            cout << " ";
        }
        // star
        for( int col=0; col<num-row; col++ ){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}