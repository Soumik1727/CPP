#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number of rows in the Pyramid: ";
    cin >> num;

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

    return 0;
}