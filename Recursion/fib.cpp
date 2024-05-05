#include<iostream>
using namespace std;

int fib( int num){
    if( num == 0)
        return 0;
    
    if(num ==1)
        return 1;
    
    int ans = fib(num-1) + fib(num-2);
    return ans;
    
}

int main(){
    cout << "Enter nth term: ";
    int n;
    cin >> n;

    cout << fib(n);
}