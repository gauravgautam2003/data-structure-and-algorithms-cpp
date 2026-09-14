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

void insertAtTail(Node* &head, int data) {
    //node empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        newNode -> next = newNode;
    }
    //non empty node
    else {
        Node* temp = new Node(data);
        temp -> next = head -> next;
        head -> next = temp;
        head = temp;
    }
}
Node* mergeSortedLinkedList(Node* &left, Node* &right) {
    if(left == NULL) return right;
    if(right == NULL) return right;

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL) {
        if(left -> data < right -> data) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    ans = ans -> next;
    return ans;
}

Node* findMid(Node* & head) {
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

Node* mergeSort(Node* &head) {
    // base case
    if(head == NULL || head -> next == NULL) return head;

    // find mid for devided into two parts of linked list
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;

    // recursive call
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left ans right
    Node* result = mergeSortedLinkedList(left, right);
    return result;
} 
int main() {
    Node* head = NULL;

    insertAtTail(head, 1);
    cout << head -> data << " ";
    insertAtTail(head, 2);
    cout << head -> data << " ";
    insertAtTail(head, 3);
    cout << head -> data << " ";
    insertAtTail(head, 2);
    cout << head -> data << " ";
    insertAtTail(head, 1);
    cout << head -> data << " ";

    cout << endl;
    
    mergeSort(head);
    return 0;
}