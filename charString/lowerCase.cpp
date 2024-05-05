#include<iostream>
#include<string.h>
using namespace std;

        // Convert a character of array into LowerCase
void toLowerCase(char ch[]){
    int index  = 0;

    while(ch[index] != '\0'){
        if(ch[index] >= 'A' && ch[index] <= 'Z'){
            ch[index] = ch[index] - 'A' + 'a';
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
    toLowerCase(ch);
    return 0;
}