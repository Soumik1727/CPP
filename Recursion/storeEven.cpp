// store even number from an array in vector

#include<iostream>
#include<vector>

using namespace std;

void solve(int a[],int size, int i, vector<int>&ans){
    // Base condition
    if(size <= i)
        return;
    
        // processing
    if(a[i]%2 == 0)
        ans.push_back(a[i]);

    // recursive call
    solve(a,size,i+1,ans);
    
}

int main(){

    int arr[] = { 2, 4, 9 , 0, 1};
    int n = sizeof(arr)/sizeof(int);

    int index = 0;
    vector<int>ans;
    solve(arr,n,index,ans);

    // for(int i=0; i< ans.size(); i++){
    //     cout << ans[i] << "\t";
    // }
    for( int num:ans){
        cout << num << "\t";

    }
    return 0;
}