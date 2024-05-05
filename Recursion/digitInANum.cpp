// n = 2645 , store evey digit using recursion

#include<iostream>
#include<vector>

using namespace std;

vector<int> solve(int n, vector<int>v){

    if(n==0)
        return v;

    int digit = n % 10;
    v = solve(n/10,v);
    v.push_back(digit);
    return v;

}

int main(){
    int n = 2645;
    vector<int> ans;
    ans = solve(n,ans);

    for(int num:ans){
        cout << num << " ";
    }
    return 0;
}