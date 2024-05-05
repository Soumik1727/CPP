#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    for(int row=0;row<n;row++){
        int dis = 1;
            for( int col=0;col<n-row;col++){
                cout << dis;
                dis++;
            }
            for( int col=row; col<row*2; col++){
                cout << "*";
            }
            for( int col=row; col<row*2; col++){
                cout << "*";
            }
            dis -= 1;
            for( int col=0; col<n-row; col++){
                cout << dis;
                dis--;
            }
            cout << endl;
    }
}