#include<iostream>
#include<limits.h>
#include<cmath>
using namespace std;

int* twoSum( int arr[],int size){
    int target;
    int* indexArr = new int[2];
    cout << "\nEnter a taget: ";
    cin >> target;
    if( target <= -(pow(10,9))  ||  target >= pow(10,9)){
        cout << "\nWrong target !";
    }
    else{
        int flag = 0;
        for( int i=0; i<size; i++){
            for( int j=1; j<size; j++){
                if ( arr[i] + arr[j] == target){
                    indexArr[0] = i;
                    indexArr[1] = j;
                    flag = 1;
                    return indexArr;
                }
            }
            if(flag == 1){
                return indexArr;
            }   
        }
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size;
    cin >> size; 
                        // Creating & displaying array
                        // Creating & displaying array
    int flag = 0;
    if( size > 0 && size <INT_MAX){
        flag = 1;
        int arr[size];
        cout << "Enter array element: ";
        for( int i=0; i<size; i++){
            cin >> arr[i];
        }
                // Displaying array
        cout << "Your created array is: ";
        for( int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
                    // Displaying index of two sum
        if( flag == 1){

            int* indexArr = twoSum(arr,size);
            for( int i=0; i<2; i++){
                cout << indexArr[i] << " ";
            }
        }
    }
    else{
        cout << " Please enter proper array size.";
    }
    return 0;
}