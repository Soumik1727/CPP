#include<iostream>
using namespace std;

class Vector{
    int x, y;

    // Vector(int a,int b){
    //     this->x = a;
    //     this->y = b;
    // }

                // Same constructor is written using INIT LIST
    public:
        Vector(int x, int y): x(x), y(y){}

        // Operator overloading // + operator
        void operator+(const Vector &v2){
            this->x = this->x + v2.x;
            this->y = this->y + v2.y;
        }
        // increment operator

        void operator++(){
            this->x++;
            this->y++;
        }

        void displayVector(){
            cout << "(X: " << x << ", Y: " << y << ")" << endl;
        }
};

int main(){
    Vector v1(2,4);
    Vector v2(4,1);
    Vector v3(4,1);
    
    v1 + v2;
    v1.displayVector();

    ++v3;
    v3.displayVector();

    return 0;
}