#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = n/2;
    int num2 = num+1;
            // Incremental
    for( int row=0; row<=num; row++){
        int dis = 0;
        for( int col=0; col<2*row+1; col++ ){
            if( col==0 || col==2*row){
                cout << "* ";
            }
            else{
                if( col<row+1){
                    dis += 1;
                    cout << dis << " ";
                }
                else{
                    dis -= 1;
                    cout << dis << " ";
                }
            }
        }
        cout << endl;
    }
        // Decremental
    for( int row=0; row<=num; row++){
        int dis = 0;
        for( int col=0; col<2*row+1; col++ ){
            if( col==0 || col==2*row){
                cout << "* ";
            }
            else{
                if( col<row+1){
                    dis += 1;
                    cout << dis << " ";
                }
                else{
                    dis -= 1;
                    cout << dis << " ";
                }
            }
        }
        cout << endl;
    }
}