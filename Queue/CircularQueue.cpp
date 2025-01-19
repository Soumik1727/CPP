#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int rear;
    int front;
    int size;
    int count; // To track the number of elements in the queue

public:
    CircularQueue(int s) {
        this->size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = -1;
        }
        front = -1;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return (count == 0);
    }

    bool isFull() {
        return (count == size);
    }

    void push(int data) {
        if (isFull()) {
            cout << "The Queue is full." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % size; // Circular increment of rear
        }
        arr[rear] = data;
        count++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is underflow." << endl;
            return;
        }
        arr[front] = -1;
        if (front == rear) { // Queue becomes empty
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % size; // Circular increment of front
        }
        count--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "No element in the Queue." << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "No element in the Queue." << endl;
            return -1;
        }
        return arr[rear];
    }

    int getSize() {
        return count;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Printing Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~CircularQueue() {
        cout << "\nDestructor is called!" << endl;
        delete[] arr;
    }
};

int main() {
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50); // Queue is now full
    q.display();

    q.pop(); // Pops 10
    q.push(60); // Adds 60 to the front position
    q.display();

    q.pop(); // Pops 20
    q.push(70); // Adds 70 to the next front position
    q.display();

    cout << "Front Element: " << q.getFront() << endl;
    cout << "Rear Element: " << q.getRear() << endl;

    return 0;
}
