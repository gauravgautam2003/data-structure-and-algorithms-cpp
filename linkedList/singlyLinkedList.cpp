#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};

void insertAtStarting(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtEnding(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &tail, Node* &head, int postition, int data) {
    // handle starting insertion
    if(postition == 1) {
        insertAtStarting(head, data);
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
        insertAtEnding(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head, Node* &tail) {
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtEnding(tail, 12);
    print(head);
    
    insertAtEnding(tail, 15);
    print(head);

    insertAtPosition(tail, head,3, 22);
    print(head);

    cout << "head " << head -> data << endl;    
    cout << "tail " << tail -> data << endl;  
    
    deleteNode(4, head, tail);
    print(head);
    
    cout << "head " << head -> data << endl;    
    cout << "tail " << tail -> data << endl; 

    return 0;

}
