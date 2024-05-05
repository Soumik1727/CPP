#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

    Node(){
        this->right = NULL;
        this->left = NULL;
    }
    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

                    // Insert at Begining
    void addAtBegining(Node* &head, Node* &tail, int data){

        if( head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(data);
            newNode ->right = head;
            head->left = newNode;
            head = newNode;
        }
    }


                    //  Displaying linked list
    void display( Node *head){
        int lenght = 0;
        if( head == NULL){
            cout << "There is no node in the linked list!" << endl;
        }
        else{
            Node *temp = head;
            while( temp != NULL ){
                cout << temp->data << "->";
                temp = temp->right;
            }
        }
    }

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    addAtBegining(head, tail, 10);
    addAtBegining(head, tail, 20);
    addAtBegining(head, tail, 30);
    addAtBegining(head, tail, 40);
    display(head);

    return 0;
}