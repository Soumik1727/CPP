#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter row number: ";
    cin >> num1;
    cout << "Enter coloumn number: ";
    cin >> num2;

    for(int row=0; row<num1; row++){
        for(int col=0; col<num2; col++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}