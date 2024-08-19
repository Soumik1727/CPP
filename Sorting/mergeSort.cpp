#include<iostream>
#include<vector>
using namespace std;

    void mergeArray( vector<int>&arr, int s, int e){

        int mid = s + (e-s)/2;
        vector<int>temp;

        int left = s;
        int right = mid+1;
     
        while( left <= mid && right <= e){

            if( arr[left] > arr[right]){
                temp.push_back(arr[right]);
                right++;
            }
            else{
                temp.push_back(arr[left]);
                left++;
            }
        }
                        // If left array element are sorted and right array exit
        while( left <=  mid){
            temp.push_back(arr[left]);
            left++;
        }
        while( right <= e){
            temp.push_back(arr[right]);
                right++; 
        }
        for(int i=s; i <= e;i++ ){
            arr[i] = temp[i-s];
        }
    }
                // Dividing theb array and call merge function
    void mergeSort(vector<int>&arr, int s, int e){
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
    void display( vector<int>&arr, int size){

        for( int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main(){

    vector<int>arr = {7,3,1,9,1,2,0,8,0,5};

    int size = arr.size();
    int s = 0;
    int e = size - 1;

    cout << "Before sorting: ";
    display(arr, size);

    mergeSort(arr, s, e);
    cout << "After sorting: ";

    display(arr, size);

    return 0;
}