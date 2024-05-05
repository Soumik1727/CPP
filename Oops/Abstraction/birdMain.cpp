#include<iostream>
using namespace std;

#include "bird.h"

// We create following class because we don't want to call bird's function in the implementation class
// using bird name.If we call each function using bird name then it becomes difficult to maintain.
// We just create Specific bird type object (Bird *bird = new Sparrow();) and  call the virtual function
//  by the following function

void birdDoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
}

int main(){
    Bird *bird = new Sparrow();
    birdDoesSomething(bird);

    // We can't create object of a abstract class
    //  Bird *b = new Bird();

    /*  This is also not possible 

        Sparrow *p = new Sparrow();
        p->eat();
    
    */

    return 0;
}