#include<iostream>  
using namespace std;
                        // Use of get() & put() funtion
int main(){
    char ch;

    while(ch != '\n'){
        cin.get(ch);
        // ch = cin.get();    // same kaj hoy
        cout.put(ch);

    }
    return 0;
}