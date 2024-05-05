#include<iostream>
using namespace std;

class Stack{

    public:
        int *arr;
        int capacity;
        int top;

    Stack( int capacity ){
        arr = new int[capacity];
        this->capacity = capacity;
        this->top = -1;
    }

    void push(int data){
        if( top == capacity - 1){
            cout << "Stack overflow" << endl;
        }
        else{
            top++;
            arr[top] = data;
            cout << "Pushed successfully..." << endl;
        }
    }

    void pop(){
        if( isEmpty()){
            cout << "Stack underflow." << endl;
        }
        else{
            top--;
            cout << "Popped successfully..." << endl;
        }
    }

    int getTop(){
        if( isEmpty()){
            cout << "Stack is empty." << endl;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if( top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        return (top + 1);
    }

    void displayStack(){
        if( isEmpty()){
            return;
        }
        else{
            for( int i = 0; i< getSize(); i++){
                cout << arr[i] << " ";
            }
        }

    }
};

int main(){

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.pop();
    st.push(60);
    st.getSize();
    st.getTop();
    bool ans = st.isEmpty();
    if(ans == true){
        cout << "Empty Stack" << endl;
    }
    else{
        cout << "Not empty stack" << endl;
    }

    st.displayStack();

    return 0;
}