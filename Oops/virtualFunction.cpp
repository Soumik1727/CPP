#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout << "Base print." << endl;
        }
        virtual void display(){
            cout << "Base display" << endl;
        }
};
class Derived:public Base{
    public:
        void print(){
            cout << "Derived print." << endl;
        }
        void display(){
            cout << "Derived display" << endl;
        }
};
int main(){
    Base b;
    Derived d;

    Base* ptr;
    ptr = &b;

    ptr->display();
    ptr->print();
    ptr = &d;

    ptr->display();
    ptr->print();
    return 0;
}

/* =========OUTPUT========*/
// Base display
// Base print.
// Derived display
// Derived print.