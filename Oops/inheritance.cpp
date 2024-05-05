// Multiple inheritance
// diamond problem
        // Solution 1: Scope Resolution operator
// #include<iostream>
// using namespace std;

// class Person{
//     public:
//         void walk(){
//             cout << "Walking...";
//         }
// };

// class Teacher:public Person{

// };
// class Researcher:public Person{

// };

// class Professor:public Researcher,public Teacher{

// };

// int main(){

//     Professor p;
//     p.Teacher::walk();
//     return 0;
// }
        // Solution 2: Using virtual function
#include<iostream>
using namespace std;

class Person{
    public:
        void walk(){
            cout << "Walking...";
        }
};

class Teacher:virtual public Person{

};
class Researcher: virtual public Person{

};

class Professor:public Researcher,public Teacher{

};

int main(){

    Professor p;
    p.walk();
    return 0;
}