#include<iostream>
using namespace std;

int main(){
     
     int n;
     cout << "Enter a number: ";
     cin >> n;

     for(int row=0; row<n; row++){
        char ch = 'A';
        for( int col=0; col<row+1; col++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
     }
}