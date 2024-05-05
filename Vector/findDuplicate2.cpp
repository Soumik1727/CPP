#include<iostream>
#include<vector>

using namespace std;

/*
int findDuplicate(vector<int> arr){
        // Negative marking method
    int ans = -1;
    for( int i=0; i< arr.size(); i++){
        int index = abs(arr[i]);

        if( arr[index] < 0){
            return index;
        }
        arr[index] *= ans;
    }
    return -1;
}                                  */

int findDuplicate(vector<int> arr){
        // Positional method
    while( arr[0] != arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
} 

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // vector<int>arr(n);       ///// ****** Don't do this, this will
                                //// add extra n time zero to the vector, then arr.size() = 2*n !!!!!!
    vector<int>arr;

    cout << "Enter elements in your vectorArray:" << endl;
    int i = 0;
    while( i<n){
        int d; cin >> d;
        arr.push_back(d);
        i++;
    }

    int dup = findDuplicate(arr);
    cout << "\nThe duplicate element in your array is: " << dup << endl;

    return 0;
}