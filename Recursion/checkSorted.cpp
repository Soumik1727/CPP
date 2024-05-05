#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){

    if(index >= size){          // Base case
        return true;
    }

    if( arr[index] >= arr[index-1]){
        // Check further // Processing
        int ans = checkSorted(arr, size, index+1);
        return ans;
    }
    else{
        return false;
    }
}
int main(){
    int arr[] = {10, 20, 30, 70, 50};
    int size = sizeof(arr)/sizeof(int);
    int index = 1;

    bool isSorted = checkSorted(arr, size, index);
    if(isSorted){
        cout << "The array is sorted." << endl;
    }
    else{
        cout << "The array is not sorted." << endl;
    }

    return 0;

}