#include<iostream>
using namespace std;

void arrayReverse(int arr[],int size){
    int first_index = 0;
    int last_index = size - 1;
    while(first_index < last_index){
        arr[last_index] = arr[first_index] + arr[last_index];
        arr[first_index] = arr[last_index] - arr[first_index];
        arr[last_index] = arr[last_index] - arr[first_index] ;
        first_index++;last_index--;
    }
                        /* Using in-build fucntion */
    // while( first_index < last_index){
    //     swap( arr[first_index],arr[last_index]);
    //     first_index++;
    //     last_index--;
    // }
}

int main(){
    int size = 6;
    int arr[6] = {1,2,3,4,5,6 };

    arrayReverse(arr,size);

    // Printing the reverse array

    for( int i=0; i<size; i++){
        cout << arr[i] << "\t";
    }
    return 0;
}