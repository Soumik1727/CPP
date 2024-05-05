#include<iostream>
using namespace std;

void divide( int x, int y){
    try{
        if( y != 0){
            cout << "Result: " << x/y << endl;
        }
        else{
            cout << "Throwing..." << endl;
            throw y;
        }
    }

    catch(int n){
        cout << "Divided by Zero." << endl;
        throw;
    }
    cout << "In the divide function..." << endl;
    cout << "<<<<<<<<<<second Fucntion call>>>>>>>>>>>>>>>" << endl;
}

int main(){
    try{
        cout << "In main function..." << endl;
        divide(10,10);
        divide(10,0);
    }
    catch(int m){
        cout << " Rethrowed object catched here..." << endl;
    }
    return 0;
}