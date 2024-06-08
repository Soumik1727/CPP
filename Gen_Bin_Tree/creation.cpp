#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* createTree(){

    cout << "Enter data(-1 to back): " ;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    else{
       Node* root = new Node(data); 

       cout << "Root to left: " << root->data << endl;
       root->left = createTree();

       cout << "Root to right: " << root->data << endl; 
       root->right = createTree();

       return root;
    }
}

int main(){
    Node* root = createTree();



    return 0;
}