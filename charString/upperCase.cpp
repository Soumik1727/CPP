#include<iostream>
#include<string.h>
using namespace std;

        // Convert a character of array into uppercase
void toUpperCase(char ch[]){
    int index  = 0;

    while(ch[index] != '\0'){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
    cout << "After: " << ch;
}
int main(){

    cout << "Enter a string." << endl;
    char ch[100];
    // cin >> ch;
    cin.getline(ch,100);

    cout << "Original string: " << ch << endl;
    toUpperCase(ch);
    return 0;
}