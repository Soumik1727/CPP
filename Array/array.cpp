#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n = 5;

    // Taking array input
    for( int i=0; i<n; i++){
        cout << "Enter value at " << i << ": " ;
        cin >> arr[i];
    }
    // displaying array element
    for( int i=0; i<n; i++){
        cout << 2*arr[i] << " ";
    }
    return 0;
}