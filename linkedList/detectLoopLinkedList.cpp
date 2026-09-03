#include<iostream>
#include<map>
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

bool detectLoop(Node* &head) {
    if(head == NULL) {
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp != NULL) {

        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp  = temp -> next;
    }

    return false;
}

// OR 

Node* floydDetectLoop(Node* &head) {
    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL) {
        fast = fast -> next;

        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }
    return NULL;

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
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;

    while(true) {
        cout << "1. Insert Node" << endl;
        cout << "2. Delete Node" << endl;
        cout << "3. Print Node" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cin >> choice;

        switch(choice) {
            case 1: {
                int element, data;
                cout << "Enter the element after which you want to insert the new node: ";
                cin >> element;
                cout << "Enter the data for the new node: ";
                cin >> data;
                insertNode(tail, element, data);
                break;
            }
            case 2: {
                int value;
                cout << "Enter the value of the node to delete: ";
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

    tail -> next = head -> next -> next;

    if(detectLoop(head)) {
        cout << "Linked List has a loop" << endl;
    }else {
        cout << "Linked List does not have a loop" << endl;
    }

    if(floydDetectLoop(head) != NULL) {
        cout << "Linked List has a loop" << endl;
    }else {
        cout << "Linked List does not have a loop" << endl;
    }
    return 0;
}