#include<iostream>
using namespace std;

class ABC{
    int x;
    int *y;
    int z;

    public:
        ABC(){
            x = 0;
            y = new int(0);
        }

        ABC(int _x,int _y,int _z = 0){ // default argument, don't need to pass parameter from main()
            x = _x;
            y = new int(_y);
            z = _z;
        }

    int getX() const{
        // x = 10;          // as this method is declare as const, we can't redefine x
        return x;
    }
    void setX(int _val){
        x = _val;
    }

        int getY(){
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
};  

int main(){

    ABC a;
    ABC(8,9);
    cout << a.getX() << endl;
    cout << a.getY() << endl;
    return 0;
}