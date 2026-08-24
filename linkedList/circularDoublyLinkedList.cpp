#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // create constructor
    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // create destructor
    ~Node() {
        int value = this -> data;

        while(this -> next != NULL) {
            delete next;
            next = NULL;
        }

        cout << "memory free for node with value : " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int data) {
    // if empty list
    if(tail == NULL) {
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
        temp -> prev = temp;
    }
    // if list is not empty
    else {
        Node* curr = tail;
        while(curr -> data != element) {
            curr = curr -> next;
        }

        Node* temp = new Node(data);
        temp -> next = curr -> next; // temp -> next = curr -> next (5 -> 10, 10 -> 15, 15 -> 5)
        curr -> next -> prev = temp;
        curr -> next = temp;
        temp -> prev = curr;

    }
}

void print(Node* &tail) {
    Node* temp = tail;

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }
    while(tail != temp);

    cout << endl;
}

void deleteNode(Node* &tail, int value) {
    // empty list
    if(tail == NULL) {
        cout << "List is empty. please check again" << endl;
        return;
    }
    else {
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next -> prev = prev;

        // 1 node linked list
        if(curr == prev) {
            tail = NULL;
        }
        // >=2 node linked list
        else if(tail == curr) {
            tail = prev;
        }

        curr -> next = NULL;
        curr -> prev = NULL;

        delete curr;
    }
}
int main() {
    Node* tail = NULL;

    while(true) {
        cout << "1. Insert Node" << endl;
        cout << "2. Delete Node" << endl;
        cout << "3. Print List" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cin >> choice;

        switch(choice) {
            case 1: {
                int element, data;
                cout << "Enter the element after which you want to insert: ";
                cin >> element;
                cout << "Enter the data to insert: ";
                cin >> data;
                insertNode(tail, element, data);
                break;
            }
            case 2: {
                int value;
                cout << "Enter the value to delete: ";
                cin >> value;
                deleteNode(tail, value);
                break;
            }
            case 3: {
                print(tail);
                break;
            }
            case 4: {
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    
    return 0;

}