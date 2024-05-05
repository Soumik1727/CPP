#include<iostream>
using namespace std;

            // STATIC data member

class A{
    public:
        static int x,y;

        // How compiler will understand that these x and y is of which object?

        // -> By using this pointer...in print function there are a this pointer which is 
        // taking as parameter ... this 'this' pointer is different for different object.
        void print() const{
            cout << x << " " << y << endl;
        }
};

int A::x;
int A::y;

int main(){
    // A obj1 = {0 ,3};
    // A obj2 = {1 ,2};

    A obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();
    
    A obj2;
    A::x = 0;
    A::y = 7;
    obj1.print();
    

    return 0;
}