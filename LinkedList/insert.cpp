#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        this->next = NULL; 
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node* head);

                    // ADD AT BEGINING
                    // ADD AT BEGINING

    void addAtBegining(Node* &head, Node* &tail){
        cout << "Enter data: ";
        int n; cin >> n;
        Node* newNode = new Node(n);

        if(head == NULL){
            head = newNode;
            tail = head;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
                    // ADD AT END
    void addAtEnd( Node* &head, Node* &tail){
        cout << "Enter data: ";
        int n; cin >> n;
        Node* newNode = new Node(n);

        if( head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            // Node* temp = head;

            tail->next = newNode;
            tail = newNode;

        }
    }

    void addAtPosition(Node* &head, Node* &tail){
        cout << "Enter position: " ;
        int pos;  cin >> pos;

        if( pos < 1){   // Insert at first positon
            addAtBegining(head, tail);
        }
        else if( pos > getLength(head)  ){  // Insert at end
            addAtEnd(head, tail);
        }
        else{
            cout << "Enter data: ";
            int n; cin >> n;
            Node* newNode = new Node(n);

            Node* prev = NULL;
            Node* curr = head;
            while( pos != 1){

                pos--;
                prev = curr;
                curr = curr->next;
            }
            
            newNode->next = curr;
            prev->next = newNode;
        }
    }
                        // Printing the linked list
                        // Printing the linked list

        void printLL(Node* head){

            Node* temp = head;
            if( temp == NULL){
                cout << "Empty lisked list" << endl;
            }
            while( temp != NULL){
                cout << temp->data << "->" ;
                temp = temp->next;
            }
        cout << endl;
        }
                        // Length of the Linked List
                        // Length of the Linked List

    int getLength(Node* head){
        Node* temp = head;
        int length = 0;

        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }

int main (){        // MAIN FUNCTION

    Node *head = NULL;
    Node *tail = NULL;

                // Switch case & functions calling
    int ch;
    do{
        cout << endl;
        cout << "===========MENU==========" << endl;
        cout << "1:Insert at begining.\n";
        cout << "2:Insert at end.\n";
        cout << "3:Insert at position.\n";
        cout << "4:Print Linked List.\n";
        cout << "5:Length of the linked list.\n";
        cout << "0:Exit.";

        cout << "\n\nEnter your choice: ";
        cin >> ch;

        switch(ch){
            case 1: addAtBegining(head, tail);
                                break;

            case 2: addAtEnd(head, tail);
                                break;

            case 3: addAtPosition(head, tail);
                                break;

            case 4: printLL(head);
                                break;

            case 5: cout << "Length: " << getLength(head);

                                break;

            default:cout << "Please enter proper input!" << endl;
                                break;

            case 0: cout << "You're exited from the program." << exit << endl;
        }

    }while ( ch != 0);

    return 0;
}