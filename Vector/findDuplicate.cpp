#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findDuplicate(vector<int>& valos){
        // Comparing i & (i+1) index
    sort(valos.begin(), valos.end());

    for( int i=0; i< valos.size(); i++){
        if( valos[i] == valos[i+1]){
            return valos[i];
        }
    }
    return -1;
}

int main(){


    // vector<int>varry(n);



    // vector<int>arr;
    // arr.push_back(4);
    // arr.push_back(8);
    // arr.push_back(12);
    // arr.push_back(11);
    // arr.push_back(4);

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