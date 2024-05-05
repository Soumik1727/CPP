#include<iostream>
using namespace std;


bool check(int a[], int size ,int index = 1){

    if(index >= size)
        return true;

    if( a[index] >= a[index-1]){
        bool ans = check(a, size, index+1);
        return ans;
    }
    else{
        return false;
    }
    
}

int main(){
    int arr[] = { 2, 4, 9 ,11};
    int n = sizeof(arr)/sizeof(int);

    bool ans = check(arr,n);

    if(ans == true){
        cout << "Array is sorted.";
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;
}