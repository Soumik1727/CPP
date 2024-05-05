#include<iostream>
using namespace std;

class Base{
    public:
        Base(){

            cout << "Constructor of BASE class." << endl;
        }
        virtual ~Base(){
            cout << "Destructor of BASE class." << endl;
        }
};
class Child:public Base{
    int *a;
    public:
        Child(){
            a = new int[100];
            cout << "Constructor of CHILD class." << endl;
        }
        ~Child(){
            cout << "Destructor of CHILD class." << endl;
        }
};

int main(){
    Base *b = new Child;
    delete b;
    return 0;
}