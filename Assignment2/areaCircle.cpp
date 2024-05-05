#include<iostream>
using namespace std;

void areaCircle( float radius){
        float area = 2*3.142*radius;
        cout << "The area of the circle is: " << area << endl;
        return;
    }

int main(){

    float radius;
    cout << "Enter a radius: ";
    cin >> radius;

    areaCircle(radius);

    return 0;
}