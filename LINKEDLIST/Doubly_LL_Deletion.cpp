
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

//Get length of LL
int GetLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

//Insert a head
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

// Insert at tail
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

//INSERT AT POSITION
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
        Node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp->next;
        newNode->next = forward;
        forward->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

//DELETION
void Deletion(int position, Node*& head, Node*& tail) {
    int length = GetLength(head);  //GET length
//    LL is empty
    if (tail == NULL && head == NULL) {
        cout << "Nothing to delete" << endl;
        return;
    }

//	LL having single node
    if (tail == head) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
	
//	delete from head
    if (position == 1) {
        Node* temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else if (position == length) {
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    
//    delete from any position
    else {
        Node* temp = head;
        for (int i = 0; i < position - 2; i++) {
            temp = temp->next;
        }
        Node* curr = temp->next;
        Node* forward = curr->next;
        temp->next = forward;
        forward->prev = temp;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

//PRINT LL
void PrintLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtPosition(1, 255, head, tail);
    InsertAtPosition(2, 55, head, tail);
    InsertAtPosition(3, 111, head, tail);
    InsertAtPosition(4, 777, head, tail);
    InsertAtPosition(5, 555, head, tail);

    cout << "Before deletion: ";
    PrintLL(head);

    Deletion(2, head, tail);
    Deletion(5, head, tail);

    cout << "After deletion: ";
    PrintLL(head);

    return 0;
}


