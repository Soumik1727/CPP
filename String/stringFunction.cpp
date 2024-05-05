#include<iostream>
#include<string.h>

using namespace std;

int main(){

    cout << "Enter your String: ";
    string str;
    // cin >> str;
    getline(cin,str);
    cout << "Your string: " << str; 
    cout << "Lenght of the string is: " << str.length() << endl;
    cout << "Empty: " << str.empty() << endl;
    cout << "Front: " << str.front() << endl;
    cout << "Back: " << str.back() << endl;
    cout << "At: " << str.at(3) << endl;
    str.push_back('S') ;
    cout << "push_back: " << str << endl;
    str.pop_back();
    cout << "pop_back: " << str << endl;


                // Appending
    string str2  = "Mondal";
    str.append(str2);
    cout <<"String 1: " << str << endl;
    cout <<"String 2: " << str2 << endl;

    str.erase(6,6);
    cout <<"String 1: " << str << endl;

                // Insert
                // Insert
    string name = "Soumik Mondal";
    string middle = "Commando";

    name.insert(7,middle);
    cout << "After inserting: " << name << endl;

                // checking a string is substring of another or not

    string string1 = "Hi,I'm Soumik, learning C++ from Love Babbar!";
    string string2 = "Jadavpur";

    if(string1.find(string2) == string::npos){
        cout << "not found" << endl;
    }
    else{
        cout << "found" << endl;
    }
                // if two string are same or not
    if(string1.compare(string2)== 0){
        cout << "Matching" << endl;
    }
    else{
        cout << "Not matching" << endl;
    }
            //  extracting substring of a string
    string  newStr="";
    newStr = string1.substr(15,12);
    cout << "Sub string: " << newStr << endl;
    return 0;
}