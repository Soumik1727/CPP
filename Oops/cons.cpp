#include<iostream>

using namespace std;

class A{
    public:
    int m , n;
        A(void){
            m = 0;
            n = 0;
        }
        void display();
        // void display(){
        //     cout << "M: " << m << endl;
        //     cout << "N: " << n;
        // }
};
        void A::display(){
            cout << "M: " << m << endl;
            cout << "N: " << n;
        }

int main(){
    A o1;
    o1.display();
    return 0;
}