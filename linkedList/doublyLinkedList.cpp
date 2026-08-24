#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this -> prev = NULL;
        this -> data = data;
        this -> next = NULL;
    }

   ~Node() {
        int value = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

void getLength(Node* &head) {
    Node* temp = head;
    int len = 0;

    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }

    cout << "length is remaining : " << len;
}

void insertAtHead(Node* &tail, Node* &head, int data) {

    if(head == NULL) {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else {
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int data) {
    if(tail == NULL) {
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else {
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int postition, int data) {
    // handle starting insertion
    if(postition == 1) {
        insertAtHead(tail, head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < postition - 1) {
        temp = temp -> next;
        count++;
    }

    // insert at last postion
    if(temp -> next == NULL) {
        insertAtTail(tail, head,  data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
    
}


void deleteNode(int position, Node* &head, Node* &tail) {

    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

        // The list had only one node.
        if(head == NULL) {
            tail = NULL;
        }
    } 
    else {
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < position) {
            prev = curr;
            curr = curr -> next;
            count++;
        }
        
        curr -> prev = NULL;
        prev -> next = curr -> next;

        if(curr == tail) {
            tail = prev;
        }
        
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while(true) {
        cout << "1. Insert at head" << endl;
        cout << "2. Insert at tail" << endl;
        cout << "3. Insert at position" << endl;
        cout << "4. Delete node" << endl;
        cout << "5. Print list" << endl;
        cout << "6. Get length of list" << endl;
        cout << "7. Exit" << endl;

        int choice;
        cin >> choice;

        switch(choice) {
            case 1: {
                int data;
                cout << "Enter data to insert at head: ";
                cin >> data;
                insertAtHead(tail, head, data);
                break;
            }
            case 2: {
                int data;
                cout << "Enter data to insert at tail: ";
                cin >> data;
                insertAtTail(tail, head, data);
                break;
            }
            case 3: {
                int position, data;
                cout << "Enter position and data to insert: ";
                cin >> position >> data;
                insertAtPosition(tail, head, position, data);
                break;
            }
            case 4: {
                int position;
                cout << "Enter position to delete node: ";
                cin >> position;
                deleteNode(position, head, tail);
                break;
            }
            case 5: {
                print(head);
                break;
            }
            case 6: {
                getLength(head);
                break;
            }
            case 7: {
                return 0; // Exit the program
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}