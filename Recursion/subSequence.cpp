#include<iostream>
#include<string>

using namespace std;

void findSubsequences(string str, string op, int index){

    if( index >= str.length()){
        // answers are built in output string
        cout << "-> " << op << endl;
        return;
    }

    char ch = str[index];

            // EXCLUDE
    findSubsequences(str,op,index+1);
    op.push_back(ch);   
            // INCLUDE
    findSubsequences(str,op,index+1);

    //   in case of include first

    // op.push_back(ch); 
    // findSubsequences(str,op,index+1);
      
    // op.pop_back(ch);
    // findSubsequences(str,op,index+1);
    

}


int main(){
    string str = "abc";
    // string str;
    // cout << "Enter a string(1 to 10 word): ";
    // cin >> str;

    string op = "";
    int index = 0;

    findSubsequences(str,op,index);
    return 0;
}