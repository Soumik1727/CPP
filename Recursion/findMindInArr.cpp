#include<iostream>
#include<limits.h>

using namespace std;

void findMinimum(int arr[], int size, int index, int &mini){// we are passing address as we are passing
                                                            // by reference
    if(index==size)
        return ;

    mini = min(mini,arr[index]);
    findMinimum(arr,size,index+1,mini);

}

int main(){
    int arr[] = {3,5,8,1,9};
    int size = sizeof(arr)/sizeof(int);

    int index = 0;
    int mini = INT_MAX;

    findMinimum(arr,size,index,mini);

    cout << "Minimum: " << mini;
    return 0;

}