#include<iostream>
using namespace std;

class Heap{
    public:
        int size;
        int capacity;
        int* arr;

        Heap(int capacity){
            this->capacity = capacity;
            this->arr = new int[capacity];
            this->size = -1;
        }

        void insert( int val){
            if( size == capacity){
                cout << "Heap overflow!";
                return;
            }
            size++;
            int index = size;
            arr[index] = val;

            while( index > 1){
                int parentIndex = index / 2;

                if( arr[index] > arr[parentIndex]){
                    swap(arr[index], arr[parentIndex]);
                    index = parentIndex;
                }
                else {
                    break; // Heap property is maintained
                }
            }
            
        }
        void printHeap(){
            cout << "Printing Heap: " << endl;
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
        }
};

int main(){

    Heap *h = new Heap(10);
    h->insert(5);
    h->insert(10);
    h->insert(15);
    h->insert(6);
    h->insert(25);
    h->insert(50);

    h->printHeap();
    return 0;
}