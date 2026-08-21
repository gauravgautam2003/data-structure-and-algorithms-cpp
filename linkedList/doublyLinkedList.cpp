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
};


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


    insertAtHead(tail, head, 11);
    print(head);
    
    insertAtHead(tail, head, 12);
    print(head);

    insertAtHead(tail, head, 13);
    print(head);

    insertAtTail(tail,head, 14);
    print(head);
    
    insertAtTail(tail,head, 15);
    print(head);

    insertAtTail(tail,head, 16);
    print(head);

    insertAtPosition(tail, head,3, 22);
    print(head);

    insertAtPosition(tail, head,1, 25);
    print(head);
    
    insertAtPosition(tail, head,5, 45);
    print(head);

    return 0;
}