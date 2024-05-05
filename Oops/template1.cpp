#include<iostream>
using namespace std;

    // Function template

template <class T> T add( T a, T b){
    return (a+b);
}

int main(){
    
    cout << add(3,4) << endl;
    cout << add(1.2,2.3) << endl;
    return 0;
}