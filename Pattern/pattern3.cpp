// Numeric Hollow Inverted Half Pyramid

#include<iostream>
using namespace std;

int main(){
     
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int row=0; row<n; row++){
        int display=row+1;
        if( row==0 || row>=n-2){
            for( int col=0; col<n-row; col++){
                cout << display << " ";
                display += 1;
            }
        }
        else{
            for( int col=0; col<n-row; col++){
                if( col==0 || col==n-row-1){
                    cout << display << " ";
                    display += 1;
                }
                else{
                    cout << "  ";
                    display += 1;
                }
            }
        }
        cout << endl;
    }
}