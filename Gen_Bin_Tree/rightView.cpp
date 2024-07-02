#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
        int value;
        Node* left;
        Node* right;

    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createNode(){
    cout << "Enter the value: ";
    int val;
    cin >> val;

    if( val == -1) return nullptr;

    Node* root = new Node(val);
    cout << "Enter left data of " << val << endl; 
    root->left = createNode();
    cout << "Enter right data of " << val << endl; 
    root->right = createNode();
    return root;
}
void printRightView(Node* root, int level, vector<int>&v){
    if( root == NULL) return;

    if( level == v.size()){
        v.push_back(root->value);
    }
    printRightView(root->right, (level+1), v);
    printRightView(root->left, (level+1), v);
}

int main(){

    Node* root = createNode();

    vector<int>v;
    printRightView(root, 0, v);

    cout << "Printing left view of the tree." << endl;
    for( int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}