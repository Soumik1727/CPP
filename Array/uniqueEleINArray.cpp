#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int ans = 0;
    for( int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int size = 7;
    int arr[7] = { 2,3,4,5,4,3,2 };

    int result = findUnique(arr,size);
    cout << "The unique element in the array is: " << result ;
    return 0;
}