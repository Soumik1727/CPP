#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            this->data = value;
            this->left = NULL;
            this->right = NULL;
        }
};

void createNode(Node* &root){

    cout << "Enter data(-1 to exit) : ";
    int data;
    cin >> data;
    while( data = -1){

        
    } 
}



int main(){

    Node* root = NULL;
    createNode(root);

    return 0;
}