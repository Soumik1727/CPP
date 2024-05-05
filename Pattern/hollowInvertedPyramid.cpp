#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for( int row=0; row<n; row++ ){
        for( int col=0; col<n-row; col++){
                        // For printing last 2 line & first line star
            if( row == 0 || row>=n-2){
                cout << "* ";
            }
                        //for print star for row1 to lastRow-2
            else if( col== 0 || col==n-row-1){
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