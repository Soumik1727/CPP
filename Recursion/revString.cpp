#include<iostream>
#include<cstring>
using namespace std;

void reverseString( string &s, int start, int end){

    if( start > end ){
        return;
    }
    swap(s[start],s[end]);

    reverseString(s, start+1, end-1);
}

int main(){

    string s;
    cout << "Enter your string: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    reverseString(s,start,end);
    cout <<"After: " << s;

    return 0;
}