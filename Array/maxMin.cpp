#include<iostream>
#include<limits.h>
using namespace std;

    void displayError(void);
        // Array Creation
    int* createArray( int& flag,int num){
        
        if( num < INT_MAX && num > 0){
            int * arr = new int[num];
            cout << "Enter array element: ";
            for( int i=0; i<num; i++){
                cin >> arr[i];
            }
            flag = 1;
            // Display array
            cout << "Yor created array is: ";
            for( int i=0; i<num; i++){
                cout << arr[i] << " ";
            }
            return arr;
        }  
    }
    void displayError(){
        cout << "Array size must be less than " << INT_MAX << " or greater than 0.";
    }

    // Find maximum & minimum
    void findMaxMin( int arr[] , int size){
        int max = INT_MIN ;
        int min = INT_MAX ;
        for( int i=0; i<size; i++){
            if( arr[i] > max ){
                max = arr[i];
            }
            if( arr[i] < min ){
                min = arr[i];
            }
        }
        cout << "\nMaximum element of the array is: " << max << endl;
        cout << "Minimum element of the array is: " << min << endl;

    }

int main(){
    int num;
    int flag = 0;
    cout << "Enter a array size: ";
    cin >> num;

    int* arr = createArray(flag,num);
    if( flag == 1){
        cout << "\nArray is created successfully.";
        findMaxMin(arr,num);
    }
    else{
        displayError();
    }
    
}