#include<iostream>
using namespace std;

int countZeroOne(int arr[],int size){
    int zero = 0;
    int one = 0;
    for( int i=0; i<size; i++){
        if( arr[i]==0 ){
            zero++;
        }else{
            one++;
        }
    }
    cout << "No of zero: " << zero << endl;
    cout << "No of one: " << one << endl;
}

int main(){
    int size = 7;
    int arr[7] = { 0,1,1,1,0,0,0 };

    countZeroOne(arr,size);
    
    return 0;
}