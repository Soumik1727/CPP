#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

class Error{
    
    int err_code;
    char *ptr;
    public:
        Error(int c, char *d){
            err_code = c;
            ptr = d;
            strcpy(ptr,d);
        }

    void errDisplay(){
        cout << "Error code: " << err_code << endl;
        cout << "Error Ptr: " << ptr << endl;
    }

};

int main(){

    try{
        cout << "Please enter any from keyboard";
        getch();
        throw Error(99,"Test Exception");
    }
    catch(Error e){
        cout << "Exception caught successfully..." << endl;
        e.errDisplay();
    }

    return 0;
}