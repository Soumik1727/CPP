#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> arr;
    // vector<int> arr(5);
    // vector<int> arr(5,101);
    // for( int i=0; i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }

    // vector<vector<int>>arr;
    vector<vector<int>>arr(5,vector<int>(10,-1));
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    ////////////////////// JAGGED ARRAY /////////////////////
    ////////////////////// JAGGED ARRAY /////////////////////

    vector< vector<int>>brr;
    vector<int>vec1(10,9);
    vector<int>vec2(1,-1);
    vector<int>vec3(14,3);
    vector<int>vec4(10,6);
    vector<int>vec5(4,-2);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    cout << "...JAGGED ARRAY..." << endl;
    for(int i=0; i<brr.size(); i++){
        for( int j=0; j<brr[i].size(); j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}