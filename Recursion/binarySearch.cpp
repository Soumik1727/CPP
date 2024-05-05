#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int target, int start, int end){

    int mid = start +(end-start)/2 ;
    if( start > end)
        return -1;

    if( target == arr[mid])
        return mid;

    if(arr[mid] < target){
        return binarySearch(arr,target, mid+1,end);
    }
    else{
        return binarySearch(arr,target, start,mid-1);
    }

}

int main(){
    int arr[] = { 3, 4, 7, 1, 0};
    int size = sizeof(arr)/sizeof(int);

    sort (arr,arr+size);    // Sorting the array

    int start = 0, end = size-1;
    int target = 1;

    int ans = binarySearch(arr,target, start, end);

    if(ans == -1){
        cout << "Element not found!";
    }
    else{
        cout << "Index: "<<ans;
    }

    return 0;
}