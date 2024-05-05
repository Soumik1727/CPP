#include<iostream>
using namespace std;


    void mergeArray( int arr[], int s, int e){

        int mid = s + (e-s)/2;
        
        int lenLeft = mid - s + 1;
        int lenRight = e - mid;

                    // Creating of two dynamic array
        int *left = new int[lenLeft];
        int *right = new int[lenRight];

                    // Copy element from actual array
        int k = s;      // index of actual array
        for( int i = 0; i < lenLeft; i++){
            left[i] = arr[k];
            k++;
        }
        k = mid + 1;
        for( int i = 0; i < lenRight; i++){
            right[i] = arr[k];
            k++;
        }
                        // Actual merge function
        int leftIndex = 0;
        int rightIndex = 0;

        int mainArrayIndex = s;
        
        while( leftIndex < lenLeft && rightIndex < lenRight){

            if( left[leftIndex] > right[rightIndex]){
                arr[mainArrayIndex] = right[rightIndex];
                mainArrayIndex++;
                rightIndex++;
            }
            else{
                arr[mainArrayIndex] = left[leftIndex];
                mainArrayIndex++;
                leftIndex++;
            }
        }

        // If left array element are sorted and right array exit

        while( rightIndex < lenRight){
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
        while( leftIndex < lenLeft){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++; 
        }
        
        delete[] left;
        delete[] right;
    }

                // Dividing theb array and call merge function
    void mergeSort(int arr[], int s, int e){

        // Base case for invalid array
        if( s > e)
            return;
        // Base case for single element
        if( s == e )
            return;

        int mid = s + ( e - s)/2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        mergeArray(arr, s, e);
    }
                // Display array
    void display( int arr[], int size){

        for( int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main(){

    int arr[] = { 1, 9, 0, 2, 5, 6, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = size - 1;

    cout << "Before sorting: ";
    display(arr, size);

    mergeSort(arr, s, e);
    cout << "After sorting: ";

    display(arr, size);

    return 0;
}