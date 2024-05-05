#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    for( int row=0; row<n; row++){
        for( int col=0; col<row+1; col++){
            count += 1;
            cout << count << " ";
        }
        cout << endl;
    }
}