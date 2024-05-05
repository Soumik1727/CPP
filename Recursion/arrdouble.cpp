#include<iostream>
using namespace std;


void makeDouble(int a[], int size ,int index){

    if(index >= size)
        return ;

    a[index] *= 2;

    makeDouble(a,size,index+1);
}

int main(){
    int arr[] = { 2, 4, 9 , 0, 1};
    int n = sizeof(arr)/sizeof(int);
    int index =0 ;

    makeDouble(arr,n,index);

    for(int ele:arr){
        cout << ele << " " ;
    }
    return 0;
}