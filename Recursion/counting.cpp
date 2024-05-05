#include<iostream>
using namespace std;

void printCount(int num){
    if(num == 0){
        return;
    }

    cout << num << endl;
    printCount(num-1);
}

int main(){
    cout << "Enter a range: ";
    int n;
    cin >> n;

    printCount(n);
    return 0;
}