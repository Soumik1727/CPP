#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue{
    int *arr;
    int rear;
    int front;
    int size;

    public:
    Queue(int s){
        this->size = s;
        arr = new int[size];
        for(int i = 0; i < size; i++){
            arr[i] = -1;
        }
        front = -1;
        rear = -1;
    }

    bool isEmpty(void){
        if( front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(void){
        if( rear == size - 1){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int data){
        if(isFull()){
            cout << "The Queue is full." << endl;
            return;
        }
        else if( isEmpty()){
            front++;
            rear++;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "Queue is underflow." << endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }
    int getFront(){
        if(front == -1){
            cout << "No element in the Queue." << endl;
        }
        else
            return arr[front];
    }
    int getRear(){
        if(front == -1){
            cout << "No element in the Queue." << endl;
        }
        else
            return arr[rear];
    }
    int getSize(){
        if(isEmpty()){
            return 0;
        }
        else{
            return (rear - front + 1);
        }
    }
    void display(){
        cout << "Printing Queue: ";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
    }
    ~Queue(){
        cout << "\nDestructor is called!" << endl;
        delete[] arr;
    }
};

int main(){

    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.pop();

    q.display();


    return 0;
}