#include<iostream>
using namespace std;
            // Example of Pure virtual and Abstract class
class Base{
    public:
        int x = 10;
        virtual void getX() = 0;
};

class Derived: public Base{
    public:
    void getX(){
        cout << "I'm pure virtual...";
    }
};

int main(){
    Derived d;
    d.getX();

    return 0;
}