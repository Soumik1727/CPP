// Stack STL Basic

#include<iostream>
#include<stack>

using namespace std;

            // Printing stack function recursively
void printStack(stack<int>st){
    
    if( st.empty()){
        return;
    }
    int x = st.top();
    
    st.pop();
    printStack(st);
    
    cout << x << " ";
    
    st.push(x);
    
    
}

int main(){

    // Creation of stack
    stack<int>st;
    // pushing element in stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    cout << "Size of stack is: " << st.size() << endl;
    
    st.pop();
    cout << "Size of stack is: " << st.size() << endl;
    cout << "Top of the stack: " << st.top() << endl;
    printStack(st);
    
    // Printing the stack
    
    return 0;
}
