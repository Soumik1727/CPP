#include<iostream>
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

Node* createTree(){

    cout << "Enter data(-1 to back): " ;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    else{
       Node* root = new Node(data); 

       cout << "Left of Node: " << root->data << endl;
       root->left = createTree();

       cout << "Right of Node: " << root->data << endl; 
       root->right = createTree();

       return root;
    }
}

void preOrderTraversal(Node* root){
    if( root == NULL){
        return;
    }
    // N 
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if( root == NULL){
        return;
    }
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout << root->data << " ";
    
}
void inOrderTraversal(Node* root){
    if( root == NULL){
        return;
    }

    inOrderTraversal(root->left);   // L
    cout << root->data << " ";  // N
    inOrderTraversal(root->right);  // R
}

void levelOrderTraversal(Node* root){
    if( root == NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);       // To keep track of all nodes in same level

    while( q.size() > 1){
        Node* front = q.front();
        q.pop();

        if( front == NULL){
            cout << endl;
            q.push(NULL);
        }
        else{
            cout << front->data << " ";
            if( front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }

}

int main(){
    Node* root = createTree();

    cout << "Pre-order: ";
    preOrderTraversal(root);
    cout << "\nPost-order: ";
    postOrderTraversal(root);
    cout << "\nIn-order: ";
    inOrderTraversal(root);
    cout << "\nLevel order traversal: " << endl;
    levelOrderTraversal(root);

    return 0;
}