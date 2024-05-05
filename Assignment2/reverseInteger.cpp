#include<iostream>
#define INT_MIN -2147483648
#define INT_MAX 2147483647
using namespace std;

int reverseInteger(int num){
    if(num <= INT_MIN){
        return 0;
    }
    bool neg = false;
    if(num<0){
        neg = true;
        num = -num;
    }
    int ans=0;int rem = 0;
    while(num > 0){
        if(ans > INT_MAX/10){
            return 0;
        }
        rem = num%10;
        ans = ans*10 + rem;
        num = num/10;
    }
    return neg ? -ans : ans;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int res = reverseInteger(num);
    cout << "The reversed integer is: " << res;
    
}