#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main(){
                        // Character array or String of character
    cout << "\nEnter your Character string: ";
    char ch[100];
    cin.getline(ch, 100);   
    cout.write(ch,strlen(ch)) << endl;  // Length: strlen(ch);
    
                        // String
    cout << "\nEnter your string: ";
    string name;
    getline(cin, name);
    cout << name << endl;           // Length: name.length();

                        // Vector String
    vector<string>s{"Discipline", "Consistent"};
    s.push_back("Hard Work");

    for(int i=0; i<s.size(); i++){    // Length: str.size();
        cout << s[i] << " ";
    }


    return 0;
}

