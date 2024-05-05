#include <iostream>
using namespace std;
                // Normal Binary Search
int binarySearch(int arr[], int n, int x,int start, int end){
  while(start<=end){
    int mid = start + (end-start)/2;
    if( arr[mid] == x){
      return mid;
    }
    else if(arr[mid] < x){
      start = mid+1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1;  
}
                // Finding sub-array where the element
int expoSearch(int arr[], int n,int x){
  if( arr[0] == x){
    return 0;
  }
  int i=0 ,j=1;
  while( j<n && arr[j]<=x){
    i=j;
    j *= 2;
  }
  return binarySearch( arr,n,x,i,min(j,n-1));
}
int main() {
   int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   int n = sizeof(arr)/sizeof(int);
   int  x = 17;

   int index = expoSearch(arr,n,x);
   cout << "Index: " << index;
  return 0;
}