#include<iostream>
#include<vector>
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

void insertAtTail(Node* &tail, int data) {
    //node empty
    if(tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    //non empty node
    else {
        Node* temp = new Node(data);
        temp -> next = tail -> next;
        tail -> next = temp;
        tail = temp;
    }
}

// approach 1 using vector array
void isPalindrome(Node* &tail) {
    vector<int> arr;
    Node* temp = tail;

    while(temp != temp) {
        arr.push_back(tail -> data);
        temp = temp -> next;
    }

    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {
        if(arr[start] != arr[end]) {
            cout << "Not a palindrome" << endl;
            return;
        }
        start++;
        end--;
    }

    cout << "Is a palindrome" << endl;
}

// approach 2 find middle node and reverse the second half of the linked list and compare both halves

void reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    do {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    while(curr != head);

    head -> next = prev;
    head = prev;
}

int main() {
    Node* tail = NULL;

    insertAtTail(tail, 1);
    cout << tail -> data << " ";
    insertAtTail(tail, 2);
    cout << tail -> data << " ";
    insertAtTail(tail, 3);
    cout << tail -> data << " ";
    insertAtTail(tail, 2);
    cout << tail -> data << " ";
    insertAtTail(tail, 1);
    cout << tail -> data << " ";

    cout << endl;
    isPalindrome(tail);
    
}