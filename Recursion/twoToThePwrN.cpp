// 2 to the power N;

#include<iostream>
#include<cmath>
using namespace std;

int calculatePower( int n){
    if( n == 0){
        return 1;
    }

    int ans = 2 * pow(2,(n-1));
    return ans;
}
 
int main(){

    cout << "Enter a number: ";
    int n;
    cin >> n;

    int ans = calculatePower(n);
    cout << ans ;

    return 0;
}