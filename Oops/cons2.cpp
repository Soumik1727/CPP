#include<iostream>
using namespace std;
                // Parameterised Constructor
class Point{
    int x,y;
    public:
            // Default constructor
        Point(){
            cout << "Default constructor is called" << endl;

        }
            // Parameterised cosntuctor
        Point(int a,int b){
            cout << "Parameterised constructor is called" << endl;

            x = a;
            y = b;
        }
            // Copy constructor
        Point(const Point &obj){
            cout << "copy constructor is called" << endl;
            this->x = obj.x;
            this->y = obj.y;
        }
        void display(){
            cout << "(" << x << "," << y << ")" << endl;
            
        }
};

int main(){
    Point p1(0,22);
    p1.display();

    Point p2(30,82);
    p2.display();

    Point p3(90,0);
    p3.display();

    // COPY Constructor

    Point p4;//
    p4 = p3; // Not calling cpy constructor as object is just copying 

    Point p4 = p3; // Copy constructor called

    p4.display();
    return 0;
}