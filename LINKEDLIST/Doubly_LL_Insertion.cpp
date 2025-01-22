
#include<iostream>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;

    Node(int value) {
        this->prev = NULL;
        this->data = value;
        this->next = NULL;
    }
};

//INSERT AT HEAD
void InsertAtHead(int value, Node*& head, Node*& tail) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

//INSERT AT TAIL
void InsertAtTail(int value, Node*& head, Node*& tail) {
    Node* newNode = new Node(value);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

//GET LENGTH
int GetLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

//INSERT AT  POSITION
void InsertAtPosition(int pos, int value, Node*& head, Node*& tail) {
    int length = GetLength(head);
    if (pos < 1 || pos > length + 1) {
        cout << "Invalid position";
        return;
    }

    if (pos == 1) {
        InsertAtHead(value, head, tail);
    }
    else if (pos == length + 1) {
        InsertAtTail(value, head, tail);
    }
    else {
        Node* newNode = new Node(value);
        Node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        Node* forward = temp->next;
        newNode->next = forward;
        forward->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

//PRINT LL
void PrintLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(10, head, tail);
    InsertAtHead(20, head, tail);
    InsertAtTail(30, head, tail);
    InsertAtTail(40, head, tail);
    InsertAtPosition(3, 111, head, tail);
    InsertAtPosition(5, 555, head, tail);

    PrintLL(head);
    cout << "\nLength: " << GetLength(head);

    return 0;
}



