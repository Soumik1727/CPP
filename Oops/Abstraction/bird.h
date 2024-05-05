#if !defined(BIRD_H)
#define BIRD_H  // All code between BIRD_H and #endif will be compiled
                // This program is implementation
#include<iostream>
using namespace std;

class Bird{
    public:
            //Pure virtual function
        virtual void eat() = 0;
        virtual void fly() = 0;
};

class Sparrow:public Bird{
    private:
        void eat(){
            cout << "Sparrow is eating..." << endl;
        }
        void fly(){
            cout << "Sparrow is flying..." << endl;
        }

};
class Eagle:public Bird{
    private:
        void eat(){
            cout << "Eagle is eating..." << endl;
        }
        void fly(){
            cout << "Eagle is flying..." << endl;
        }

};

#endif      // BIRD_H