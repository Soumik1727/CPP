#include<iostream>
#include<limits.h>

using namespace std;

void findmaximummum(int arr[], int size, int index, int &maximum){// we are passing address as we are passing
                                                            // by reference
    if(index==size)
        return ;

    maximum = max(maximum,arr[index]);
    findmaximummum(arr,size,index+1,maximum);

}

int main(){
    int arr[] = {3,5,8,1,9};
    int size = sizeof(arr)/sizeof(int);

    int index = 0;
    int maximum = INT_MIN;

    findmaximummum(arr,size,index,maximum);

    cout << "maximummum: " << maximum;
    return 0;

}