#include<iostream>
using namespace std;

int main(){
    int num;
    cout << " Emter a number less than 20: ";
    cin >> num;

            // Upper part of a butterfly
    for( int row=0; row<num; row++ ){
        for( int col=0; col<= 2*num-2; col++){
            if( col>=row+1 && col< (2*num-row-2)){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
            // Lower part of a butterfly
    for( int row=0; row<num-1; row++ ){
        for( int col=0; col<= 2*num-2; col++){
            if( col>=num-row-1 && col< num+row){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }      
}