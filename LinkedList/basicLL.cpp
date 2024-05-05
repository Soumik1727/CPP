#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(){
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void printLL(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;

}

int getLength(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

int main(){

    Node *first = new Node(10);
    
    // Node *second = new Node(20);
    // first->next = second;


    Node* head;
    cout << head << endl;

    head = first; 
    cout << "head:  " << head << endl;
    cout << "head->data:  " <<head->data << endl;
    cout << "head->next:  " <<head->next << endl;
    cout << "first:  " <<first << endl;
    cout << "first->data:  " <<first->data << endl;
    cout << "first->next:  " <<first->next << endl;

    printLL(head);

    cout << "Length: " << getLength(head) << endl;
    return 0;
}