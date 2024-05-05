#include<iostream>
#include<limits.h>
using namespace std;
        
    void arrayPair(int num){
                                            // Array Creation
        if( num < INT_MAX && num > 0){
            int arr[num];
            cout << "Enter array element: ";
            for( int i=0; i<num; i++){
                cin >> arr[i];
            }
                                                // Display array
                cout << "\nResult after operation.\n";
                for( int i=0; i<num; i++){
                    for( int j=0; j<num;j++){
                        cout <<"("<< arr[i]<<" "<<arr[j] << ")\n";
                    }
                    cout << "\n\n";
                }
        }  
    }

int main(){
    int num;
    int flag = 0;
    cout << "\nEnter a array size: ";
    cin >> num;

    arrayPair(num);
}