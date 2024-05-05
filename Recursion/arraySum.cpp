#include<iostream>
using namespace std;

int arraySum(int a[], int size ,int index){

    if(index == size)
        return 0;

    int ans = a[index] + arraySum(a,size, index+1);
    return ans;
}

int main(){
    int arr[] = { 2, 4, 9 , 0, 1};
    int n = sizeof(arr)/sizeof(int);
    int index =0 ;

    int ans = arraySum(arr,n,index);
    cout << "Sum: " << ans;
    return 0;
}