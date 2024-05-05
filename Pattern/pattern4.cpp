#include<iostream>
using namespace std;

int main(){
     
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int row=0; row<n; row++){
        char ch = 64;
        for( int col=0; col<2*row+1; col++){
            // Incrementally
            if(col<row+1){
                ch += 1;
                cout << ch << " ";
            }
            // Decrement
            else{
                ch -= 1;
                cout << ch << " ";
            }
        }
        cout << endl;
     }
}