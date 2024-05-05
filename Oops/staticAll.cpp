#include<iostream>
        // static function and static member
using namespace std;

class Demo{
    int code;
    static int count;   // Static member
    public:
        void setCode(){
            code = ++count;
        }
        void showCode(){
            cout << "Object number: " << code << endl;
        }
        static void showCount(){
            cout << "Object: " << count << endl;
        }
};
int Demo::count;
int main(){
    Demo d1, d2, d3;
    d1.setCode();
    d2.setCode();

    Demo::showCount();  
    d3.setCode();
    Demo::showCount(); 
    
    d1.showCode();
    d2.showCode();
    d3.showCode();

    return 0;
}

/* =========OUTPUT========*/
// Object: 2
// Object: 3
// Object number: 1
// Object number: 2
// Object number: 3