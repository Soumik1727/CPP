#include<iostream>
#include<vector>

using namespace std;

void subArray(vector<int>nums , int s, int start, int end){
                        // Base case
    if(end >= s){
        return;
    }              // processing
    
    for( int i=start; i<= end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
                        //recursive call
    subArray(nums, s, start, end+1);
    
}

void allSubArray(vector<int>&nums, int s, int start, int end){
            // base case
    if( start == s)
        return;

            // processing
    end = start;
    subArray(nums, s, start, end);

            // recursive call
    allSubArray(nums, s, start+1, end);
}

int main(){

    cout << "Enter vector size: ";
    int s;
    cin >> s;

    cout << "Enter elements: ";
    vector<int>nums;
    for( int i = 0; i < s; i++){
        int e;
        cin >> e;
        nums.push_back(e);
    }

    cout << "Sub Array are: " << endl;
    allSubArray(nums, s, 0, 0);
    return 0;
}