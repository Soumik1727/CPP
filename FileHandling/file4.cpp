#include<iostream>
using namespace std;
                    // getline() & write() function
int main(){
    char name[30];
    cin.getline(name,30);
    cout << name << endl;
    cout.write(name,10); // O/P: Soumik Mon
    return 0;
}