#include<iostream>
#include<limits.h>
using namespace std;
        
    void arrayOperation(int num){
                                            // Array Creation
        if( num < INT_MAX && num > 0){
            int arr[num];
            cout << "Enter array element: ";
            for( int i=0; i<num; i++){
                cin >> arr[i];
            }
                                        // Taking subarray size and the array elements
            cout << "Enter a your sub-array size: ";
            int size;
            cin >> size;

            if( size <= num && size > 0){
                int subArr[size];
                                            // Main operation
                                            // Main operation
                int flag =0 ;
                for( int i=num-1; i>=0; i--){
                    if(flag==0){
                        for( int j=0; j<size;j++){
                            subArr[j] = arr[i];
                            i -= 1;
                        }
                        flag = 1;
                    }
                    arr[i+2] = arr[i];
                    if( i<size && size>=0){
                        size -= 1;
                        arr[i] = subArr[size];
                    }
                }
            }
                                                // Display array
                cout << "\nResult after operation: ";
                for( int i=0; i<num; i++){
                    cout << arr[i] << " ";
                }
        }  
    }

int main(){
    int num;
    int flag = 0;
    cout << "\nEnter a array size: ";
    cin >> num;

    arrayOperation(num);
}