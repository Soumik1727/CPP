// input : 5 = 1 to 5 er modhdhe missing number
    // input : {1,2,3,5}
    // output: 4

#include<iostream>

using namespace std;

int missingElement(int arr[],int n){
    long long total = n*(n+1)/2;
        
        for( int i=0; i<n-1; i++){
            total -= arr[i];
        }
        return (int)total;
}

int main(){

    int num;
    cout << "Enter range(N): ";
    cin >> num;

    int arr[2] = {1};
    
    int ele = missingElement(arr,num);
    cout << "\nMissing element in the array is: " << ele ;
    return 0;
}
