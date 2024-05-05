#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number of rows in the Pyramid: ";
    cin >> num;

                // Full Pyramid
                // Full Pyramid
    for( int row=0; row<num; row++){

        // Space Space Space
        for( int col=0; col<num-row-1; col++ ){
            cout << " ";
        }
        // star Star star
        for( int col=0; col<row+1; col++ ){
            if( col==0 || col == row){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}