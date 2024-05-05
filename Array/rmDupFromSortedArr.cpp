// input : 5 = 1 to 5 er modhdhe missing number
    // input : {1,2,3,5}
    // output: 4

#include<iostream>

using namespace std;

int missingElement(int arr[], int n){
    long total = n*(n+1)/2;   

    for( int i=0; i<n-1; i++){
        total -= arr[i];
    }
    return (int)total;

}

int main(){
    int size = 5;
    int arr[5] = {1,3,5,2};

    int ele = missingElement(arr,size);
    cout << "Missing element: " << ele;
    return 0;
}
