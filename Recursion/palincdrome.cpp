// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int checkPalindrome(string&str ,int start ,int end){
    
    if( start > end ){
        return 1;
    }
    if( str[start] == str[end] ){
        checkPalindrome(str ,start+1 ,end-1);
    }
    else{
        return 0;
    }
}

int main() {
    // Write C++ code here
    string str;
    cout << "Enter a string: ";
    cin >> str;
    // int ans = checkPalindrome(str ,0 ,str.size() - 1);
    int ans = checkPalindrome(str ,0 ,str.length() - 1);
    
    if(ans == 1){
        cout << "Palindrome";
    }
    else{
        cout << "Not palindrome";
    }

    return 0;
}