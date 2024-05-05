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
                            // Insertion
                            // Insertion

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
            cout << "Insertion successful..." << endl;
        }
        else{
            newNode->next = head;
            head = newNode;
            cout << "Insertion successful..." << endl;

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
            cout << "Insertion successful..." << endl;

        }
        else{
            // Node* temp = head;

            tail->next = newNode;
            tail = newNode;
            cout << "Insertion successful..." << endl;

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
            cout << "Insertion successful..." << endl;

        }
    }
                            // Delete from begining
                            // Delete from begining
    void deleteFromBegining(Node* &head, Node* &tail){
        if(head == NULL){
            cout << "No list to delete." << endl;
            return;
        }
        else if( head == tail){
            delete head;
            head = NULL;
            tail == NULL;
        }
        else{
            Node* temp = head;
            head = temp->next;
            temp = NULL;
            delete temp;
            cout << "Deletion successful..." << endl;
        }
        
    }

    void deleteFromEnd(Node* &head, Node* &tail){

        if(head == NULL){
            cout << "No list to delete." << endl;
            return;
        }
        if( head == tail){
            delete head;
            head = NULL;
            tail == NULL;
        }
        Node* curr = head;
        Node* prev = NULL;

        while( curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        tail = prev;
        delete curr;
            cout << "Deletion successful..." << endl;

    }

    void deleteFromPosition(Node* &head, Node* &tail){
        cout << "Enter position: ";
        int pos; cin >> pos;
        if(head == NULL){
            cout << "No list to delete." << endl;
            return;
        }
        else if( pos <= 1){
            deleteFromBegining(head,tail);
        }
        else if( pos >= getLength(head)){
            deleteFromEnd(head, tail);
        }
        else{
            Node* curr = head;
            Node* prev = NULL;

            while( pos > 1){
                prev = curr;
                curr = curr->next;
                pos--;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }

    void printLL(Node* head){

        Node* temp = head;
        if(head == NULL){
            cout << "No list to display!" << endl;
            return;
        }      
        while( temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
            cout << endl;
    }
    int getLength(Node* head){
        int length = 0;
        Node* temp = head;
        while(temp != NULL){
            length++;
        }
        return length;
    }
    void reverseList(Node* &head, Node* &tail){
        Node* curr = head;
        Node* prev = NULL;
        Node* temp = head;

        tail = head;

        while( curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
        cout << "Reversed successfully..." << endl;
    }

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int ch;

    do{
        cout << endl;
        cout << "===========MENU==========" << endl;
        cout << "1:Insert at begining.\n";
        cout << "2:Insert at end.\n";
        cout << "3:Insert at position.\n";
        cout << "4:Delete begining.\n";
        cout << "5:Delete from end.\n";
        cout << "6:Delete position.\n";
        cout << "7:Print Linked List.\n";
        cout << "8:Length of the linked list.\n";
        cout << "9:Reverse a list.\n";
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
            case 4: deleteFromBegining(head, tail);
                                break;

            case 5: deleteFromEnd(head, tail);
                                break;

            case 6: deleteFromPosition(head, tail);
                                break;

            case 7: printLL(head);
                                break;

            case 8: cout << "Length: " << getLength(head);

                                break;
            case 9: reverseList(head, tail);

                                break;

            default:cout << "Please enter proper input!" << endl;
                                break;

            case 0: cout << "You're exited from the program." << exit << endl;
        }

    }while( ch != 0);

    return 0;
}