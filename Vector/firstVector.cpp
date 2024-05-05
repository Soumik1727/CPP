#include<iostream>
#include<vector>

using namespace std;
     
     void display( vector<int>v){
        cout << "Your vector is: ";
        for( int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
     }
int main(){
    
    int num;
    cout << "Enter a vector size: ";
    cin >> num ;
    // vector<int>v;
    // vector<int>v(num,-1);  default value of all index is -1;
    vector<int>v(num);
                    // Taking vector elements
    int i = 0;
    while( i<num){
        int d; cin >> d;
        v.push_back(d);
        i++;
    }
    v.push_back(27);        
    v[3] = 10;              // Inserting element in a particular location


                    // Vector display function
    display(v);

    cout << "\nCapacity: " << v.capacity() << "\tSize: " << v.size();
    return 0;
}

// vector ekta dynamic array, 