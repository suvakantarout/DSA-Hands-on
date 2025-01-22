#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        cout << "Memory is freed for node with data " << this->data << endl;
    }
};

// INSERTION
void InsertAtHead(Node*& tail, Node*& head, int value) {
    // If the list is empty
    if (tail == NULL && head == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    // LL having more than one node
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    tail->next = head; // Update tail's next to maintain the circular link
}
void InsertAtTail(Node*& tail,Node* &head, int value) {
    // If the list is empty
	if (tail == NULL && head == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    else{
    	Node* newNode = new Node(value);
    	tail->next = newNode;
    	newNode->next = head;
		tail = newNode; 
	}
}

int LengthLL(Node* head) {
    if (head == NULL) { 
        return 0;
    }

    Node* temp = head;
    int length = 0;

    do {
        length++;
        temp = temp->next;
    } while (temp != head); // Stop when we loop back to the head

    return length;
}

void InsertAtPos(Node*& tail,Node* &head,int position, int value) {
	int length = LengthLL(head);
    // If the list is empty
	if (tail == NULL && head == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    else if(position == 1){
    	InsertAtHead(head,tail,value);
	}
	else if(Position == length + 1){
		InsertAtTail(head,tail,value);
	}
    else{
    	Node* newNode = new Node(value);
    	Node* temp = head;
    	for(int i =0; i<position - 2; i++){
    		temp = temp->next;
		}
		Node* forward = temp->next;
		newNode->next = forward;
		temp->next = newNode;
	}
}


// Function to print the circular linked list
void PrintLL(Node* head) {
    // Check if the linked list is empty
    if (head == NULL) {
        cout << "Linked List is empty" << endl;
        return;
    }

    Node* temp = head; // Start from the first node
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head); // Stop when the loop completes one full circle
    cout << "HEAD" << endl;
}

int main() {
    Node* tail = NULL;
    Node* head = NULL;

    // Insert nodes into the circular linked list
    InsertAtHead(tail,head, 10);
    InsertAtHead(tail,head, 20);
    InsertAtHead(tail,head, 30);
    
    InsertAtTail(tail,head, 50);
    InsertAtTail(tail,head, 90);
    
//    LengthLL(head);
    
//    InsertAtPos(head, tail,3,200);
//    InsertAtPos(head,tail,5,500);

    // Print the circular linked list
    PrintLL(tail);

    // Cleanup (if needed for dynamic memory management)
    delete tail; // Destructor will be called
    return 0;
}

