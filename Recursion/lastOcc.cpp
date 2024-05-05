#include<iostream>
#include<cstring>
using namespace std;

int lastOccurance( string &s, int &ans, int i, char x){
     
     // Base case
     if( s.length() < i){
        return ans;
     }

     // Solving one problem
     if( s[i] == x ){
        ans = i;
     }
     // recursive call
     lastOccurance(s ,ans , i+1, x);

}

int main(){

    string s;
    cout << "Enter your string: ";
    cin >> s;

    cout << "Enter the char: ";
    char x;
    cin >> x;

    int ans = -1;

    lastOccurance(s ,ans ,0, x);

    if( ans == -1 ){
        cout << x << " does not exit.";
    }
    else{
        cout << "Index: " << ans;
    }
    return 0;
}