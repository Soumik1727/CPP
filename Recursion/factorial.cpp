#include<iostream>
using namespace std;

int fact(int n){
    
    if( n == 0 || n == 1)
        return 1;
    
    int ans = n * fact(n-1);
    return ans;
    
}

int main(){

    int n;
    cout << "Enter a number (between 1 to 20 ): ";
    cin >> n;

    int ans = fact(n);

    cout << "Factorial of " <<  n << " is " << ans << endl;
    return 0;
}