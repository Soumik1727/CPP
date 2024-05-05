#include<iostream>
using namespace std;

            // STATIC MEMBER FUNCTION

class A{
    public:
        int x,y;
        A():x(0),y(0){}
        static void print(){
            cout << "I'm static function." << __FUNCTION__ ;
        }
};

int main(){

    A obj1;
    A::print(); // as print is a static function..it's now a class function
   

    return 0;
}