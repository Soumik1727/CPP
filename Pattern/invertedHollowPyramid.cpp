// *               * 
//   *           * 
//     *       *
//       *   *
//         *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for( int row=0; row<n; row++){

        //For space printing
        for( int col=0; col<row; col++){
            cout << "  ";
        }
        // For star printing
        for( int col=0; col<2*n-2*row-1; col++){
            if( col==0 || col==2*n-2*row-2){
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