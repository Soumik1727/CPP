//find pivot index:

#include <iostream>
using namespace std;

    double mySqrt(double x) {
        double s = 0.00;
        double e = x;
        double  mid = s + (e-s)/2;
        long double ans = -1.00;

        while(s <= e) {
            //kya mid hi toh answer nahi
            
            if(mid*mid == x) {
                return mid;
            }
            else if(mid*mid < x) {
                //ans store
                //right me jao
                ans = mid;
                s = mid+1;
            }
            else {
                //left me jana h 
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

int main() {
    cout << "Enter any number: ";
    double n;
    cin >> n;

    double result = mySqrt(n);
    cout << "The sqrt of " << n << " is: " << result;

return 0;
}

