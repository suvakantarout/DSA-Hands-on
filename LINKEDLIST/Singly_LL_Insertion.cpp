#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;	
		
	
	public:	
		Node(int value){
			this -> data = value;
			this -> next = NULL;
		}
};


//INSERT AT HEAD
void InsertAtHead(int value, Node* &head, Node* &tail){
	if(head == NULL && tail == NULL){  //LL is Empty
//		Create a new Node
		Node* newNode = new Node(value);
//		Head ko newNode pr lagado
		head = newNode;
//		Tail ko newNode pr lagado
		tail = newNode;
	}
	else{  // LL is not Empty / Pahele se Node present hai
//		Create a new node
		Node * newNode = new Node(value);
//		Connect this newNode to head node
		newNode->next = head;
//		Shift or Update the Head
		head = newNode;
	}
}

//INSERT AT TAIL
void InsertAtTail(int value, Node* &head, Node* &tail){
		if(head == NULL && tail == NULL){  //LL is Empty
//		Create a new Node
		Node* newNode = new Node(value);
//		Head ko newNode pr lagado
		head = newNode;
//		Tail ko newNode pr lagado
		tail = newNode;
	}
	else{  // LL is not Empty / Pahele se Node present hai
//		Create a new node
		Node * newNode = new Node(value);
//		Connect this newNode to head node
		tail->next = newNode;
//		Shift or Update the Head
		tail = newNode;
	}
}

// GET LENGTH
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

//INSERT AT POSITION
void InsertAtPosition(int position, int value, Node* &head, Node* &tail) {
    int length = getLength(head);
    if(position < 1 || position > length + 1) {
        cout << "Invalid position" << endl;
        return;
    }
    
    if(position == 1) {
        InsertAtHead(value, head, tail);
    } else if(position == length + 1) {
        InsertAtTail(value, head, tail);
    } else {
//    	Create a temporaty pointer and point it to head of LL
        Node* temp = head;
//        update the temp to (position - 1)
        for(int i = 0; i < position - 2; i++) {
            temp = temp->next;
        }
//        Create a new Node
        Node* newNode = new Node(value);
//        NewNode ki next ko temp->next ko point kar do
        newNode->next = temp->next;
//        Temp ki next ko newNode per point kat do
        temp->next = newNode;
    }
}

//PRINT LL
void printLL(Node* head){
//	Temp Pointer create karo and temp to head per point karo
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;  // update the temp
	}
	cout<<"NULL";
	
}


int main(){
	
//	Allocate memory in stack (Stack memory)
//	Node first;
//	Allocaate memory Dynamically(Heap memory)
//	Node *first = new Node(100); 
//	cout<<Node;
	
	Node* head = NULL;
	Node* tail = NULL;
	InsertAtHead(100,head,tail);
	InsertAtHead(200,head,tail);
	InsertAtHead(300,head,tail);
	InsertAtHead(400,head,tail);
	InsertAtHead(500,head,tail);
	
	InsertAtTail(10,head,tail);
	InsertAtTail(20,head,tail);
	InsertAtTail(30,head,tail);
	
	InsertAtPosition(3, 1, head, tail);
	InsertAtPosition(6, 2, head, tail);
	InsertAtPosition(2, 9, head, tail);

	
	printLL(head);
	
	return 0;
}


