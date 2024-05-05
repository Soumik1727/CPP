// Creating a file file(if exists,just opening) using construction function

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    char name[20];
    int roll;
        // Creating 'obj' object and 'data' file
            // opening file for writing data from the file
    ofstream obj("file1"); 
    cin >> name;
    cin >> roll;

    obj << name << "\n";
    obj << roll << "\n";

    obj.close();
            // opening file for reading data from the file
    ifstream obj2("file1");
    char n[20];int r;
    obj2 >> n ;
    obj2 >> r ;
            // Displaying file content on console
    cout << "Name: " << n << endl;
    cout << "Roll: " << r << endl;
    obj2.close();

    return 0;
}