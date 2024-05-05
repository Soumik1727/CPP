#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

                            // for printing the vector
    void print(vector<vector<int>>&nums){
        for(int i=0; i<nums.size(); i++){
            vector<int>& temp = nums[i];
            int a = temp[0];
            int b = temp[1];

            cout << "A:" << a << " B:" << b << endl;
        }
    }
                            // Custom comparator
    bool myComp(vector<int>& a, vector<int>& b){
        a[1] > b[1]; // Decreasing order
    }

int main(){
    cout << "Enter your array size: ";
    int size ;
    cin >> size;
    vector<vector<int>>nums;

    for(int i=0; i<size; i++){
        int a ,b;
        cout << "Enter the value of 'a' and 'b': ";
        cin >> a >> b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);

        nums.push_back(temp);
    }

                // sorting the vector using custom comparator
    sort(nums.begin(), nums.end(),myComp);
    print(nums);
    return 0;
}