#include<iostream>
using namespace std;

    // CLASS template

template <class T> 
class A{
    public:
        T a;
        T b;
        
        A(T _x, T _y):a(_x),b(_y){}

        T sum(){
            return (a+b);
        }
};

int main(){
    
    A <int> o1(2,3);
    cout << "O1: " << o1.sum() << endl;

    A <float> o2(2.5,3.1);
    cout << "O2: " << o2.sum() << endl;
    
    return 0;
}