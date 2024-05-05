#include<iostream>
using namespace std;

int* arrayReturn(){
    // int* arr = new int[5];

    static int arr[5] = {1,2,3,4,5};
    return arr;
}
int main(){

    int* arr = arrayReturn();

    return 0;
}