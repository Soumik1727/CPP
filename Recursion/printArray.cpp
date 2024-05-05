#include<iostream>
using namespace std;

void printArray(int a[], int size, int index){

    if(size == index)
        return ;

    cout << a[index] << "\t";
    index++;
    printArray(a, size,index) ;

}

int main(){
    int arr[] = { 2, 4, 9 , 0, 1};
    int n = sizeof(arr)/sizeof(int);

    int index = 0;

    printArray(arr,n,index);
  
    return 0;
}