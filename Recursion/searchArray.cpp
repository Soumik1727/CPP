#include<iostream>
using namespace std;

int searchArray(int arr[], int size, int target, int index){
    if( size <= index)
        return -1;

    if( arr[index] == target)
        return index;

    searchArray(arr, size, target, index+1);
}

int main(){
    int arr[] = { 2, 4, 9 , 0, 1};
    int n = sizeof(arr)/sizeof(int);

    int index = 0;
    int target = 1;
    int ans = searchArray(arr, n, target, index);
  
    if(ans != -1){
        cout << "Index: " << ans << endl;
    }
    else{
        cout << "Not found!";
    }
    return 0;
}