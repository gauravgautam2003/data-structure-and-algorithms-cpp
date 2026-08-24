#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // create constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // create destructor
    ~Node() {
        int value = this -> data;

        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }

        cout << "memory is free for node with data  : " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int data) {
    //node empty
    if(tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    //non empty node
    else {
        Node* curr = tail;

        // traverse node to find current insertion data
        while(curr -> data != element) {
            curr = curr -> next;
        }

        // if element found curr is representing element node

        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail, int value) {
    // empty node

    if(tail == NULL) {
        cout << "List is empty. please check again" << endl;
        return;
    }
    else {
        // assuming value is present in the linked list

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next; 
        }

        prev -> next = curr -> next;
        // if node is with single value
        if(curr == prev) {
            tail = NULL;
        } 
        // grater then 2 node
        if(tail == curr) {
            tail = prev;
        }
        
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty." << endl;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }
    while(tail != temp);

    cout << endl;
    
}

int main() {
    Node* tail = NULL;

    insertNode(tail, 4, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    
    insertNode(tail, 5, 7);
    print(tail);
    
    insertNode(tail, 7, 9);
    print(tail);
    
    insertNode(tail, 5, 6);
    print(tail);
    
    deleteNode(tail, 3);
    print(tail);

    return 0;
}