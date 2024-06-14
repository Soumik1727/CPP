// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<queue>
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
Node* createNode(){
    cout << "Enter data: ";
    int data;
    cin >> data;
    
    if( data == -1) return NULL;
    
    Node* root = new Node(data);
    
    cout << "Enter left of " << data << endl;
    root->left = createNode();
    cout << "Enter right of " << data << endl;
    root->right = createNode();
    
    return root;
}

void printLeftView( Node* root, int level, vector<int>&leftView){
    if( root == NULL) return;
    if( leftView.size() == level){
        leftView.push_back(root->data);
    }
    printLeftView(root->left, level+1, leftView);
    printLeftView(root->right, level+1, leftView);
}
int main() {
    Node* root = createNode();

    vector<int>leftView;
    printLeftView(root, 0, leftView);
    cout << "Printing leftView:" << endl;
    for(int i = 0; i < leftView.size(); i++){
        cout << leftView[i] << " ";
    }
    
    return 0;
}