#include<iostream>
#include<vector>

using namespace std;

int findPivotIndex( vector<int>& nums){
    int n = nums.size();
    int start = 0 ,end = n-1;
    int mid = (start + end)/2; int ans = -1;

    while( start <= end ){
        if( nums[mid] > nums[mid+1]){
            ans = mid + 1;
            start = mid + 1;
        }
        else if( nums[mid] < nums[mid-1]){
            // return mid-1;
            ans = mid - 1;
            end = mid - 1;
        }
        else if( nums[mid] < nums[mid+1]){
            ans = mid + 1;
            start = mid + 1;
        }
        mid = ((start+end)/2);
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int>nums(n);
    cout << "\n Enter the element of the vector.\n";
    for( int i=0; i<n; i++){
        cin >> nums[i];
    }
    int pivot = findPivotIndex(nums);
    cout << "Pivot (max) index is: " << pivot << endl;
    return 0;
}
