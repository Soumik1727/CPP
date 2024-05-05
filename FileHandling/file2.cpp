// Creating a file file(if exists,just opening) using open() function

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    char name[20];
    int roll;
        // Creating 'obj' object and 'file2' file
            // opening file for writing file2 from the file
    ofstream obj;
    obj.open("file2"); 
    cin >> name;
    cin >> roll;

    obj << name << "\n";
    obj << roll << "\n";

    obj.close();
            // opening file for reading file2 from the file
    ifstream obj2;
    obj2.open("file2");
    char n[20];int r;
    obj2 >> n ;
    obj2 >> r ;
            // Displaying file content on console
    cout << "Name: " << n << endl;
    cout << "Roll: " << r << endl;
    obj2.close();

    return 0;
}