#include<iostream>
using namespace std;


class A{
    private:
        int x;
    public:
        A(int _x):x(_x){};

        int getX() const{return x ;}        // We write a function const to prevent redefine it
                                            // As setter set value, we don't use const in setter function
                //FRIEND class
    friend class B;
                //FRIEND function
    friend void print(const A &);
};

class B{
    public:
        void display(const A &o1){
            cout << "Friend Class: " << o1.x << endl;
        }
};

void print(const A &o2){
    cout << "Friend Function: " << o2.x << endl;
}

int main(){
    A a(10);
    B b;

    b.display(a);
    print(a);
    return 0;
}