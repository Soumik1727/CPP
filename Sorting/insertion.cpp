#include<iostream>
using namespace std;

class MyClass{
    public:
         int* arr;
         int size;
        MyClass(int* arr = nullptr, int size = 0) {
            this->arr = arr;
            this->size = size;
    }

    void createArray(){
            cout << "Enter the size of the array: ";
            cin >> size;
            if( size < 1){
                cout << "Invalid size!";
                return;
            }
            arr = new int[size];

            cout << "Enter elements: ";
            for(int i = 0; i < size; i++){
                cin >> arr[i];
            }
        cout << "Array is created successfully..." << endl;
    }
    void insertionSort(int arr[], int size){
        int i, j , temp;

        for( i = 1; i < size; i++){
            j = i - 1;
            temp = arr[i];

            while( temp < arr[j] && j >= 0){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }

    void display(int *arr, int size){
        cout << "Your array: ";
        for( int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~MyClass() {
        delete[] arr;
    }
};

int main(){
    MyClass obj;
    int size;
    cout << "Enter the size of the array: ";
            cin >> size;
            if( size < 1){
                cout << "Invalid size!";
            }
        int* arr = new int[size];

            cout << "Enter elements: ";
            for(int i = 0; i < size; i++){
                cin >> arr[i];
            }
        cout << "Array is created successfully..." << endl;

    obj.display(arr,size);
    obj.insertionSort(arr, size);
    obj.display(arr,size);
    return 0;

}