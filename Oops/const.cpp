#include<iostream>
using namespace std;

int main(){
        // 1:   CONST data & NON_CONST pointer
        //      So we can change the pointer ,but not the data
    const int *a = new int(10);
    // int const *a = new int(10); Same as line 7
    cout << *a << endl;
    delete a;

    int b = 20;
    a = &b;
    cout << *a << endl; 
            //2:  Const POINTER & NON_CONST data
    int *const x = new int(5);
    *x = 7; // it possible to change the value of x
    cout << *x << endl;

            // 3: CONST pointer & CONST data

    const int *const  s = new int(27);
    cout << *s << endl;

    return 0;
}