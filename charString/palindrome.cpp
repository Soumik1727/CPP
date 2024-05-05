#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(char ch[],int n){
    int s = 0;
    int e = n-1;
    
    while(s<=e){
        if(ch[s] == ch[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    cout << "Enter your string.";
    char ch[20];
    cin >> ch;
    int n = strlen(ch);
    
    int ans = isPalindrome(ch,n);
    
    if(ans == 1){
        cout << "Palindrome";
    }
    else{
        cout << "Not palindrome.";
    }
    return 0;
}