#include<iostream>
#include<queue>
using namespace std;

class Queue{
	public:
		int *arr; //Array of pointer
		int n;
		int front;
		int rear;
		
	public:
		Queue(int size){  
			arr = new int[size];   //Dynamically allocate the array
			this->n = size;
			front = -1;
			rear = -1;
		}
		
	void push(int value){
//		Overflow
		if(front == 0 && rear == n - 1){
			cout<<"Overflow";
		}
//		push first element into the queue
		else if(front == -1 && rear == -1){
			rear++;
			arr[rear] = value;	
		}
//		Normal flow
		else{
			rear++;
			arr[rear] = value;
		}
	}
	
	void pop(){
//		Underflow
		if(front == -1 && rear == -1){
			cout<<"Underflow"<<endl;
		}
//		single element
		else if(front == rear){
			arr[rear] = -1;
			front = -1;
			rear = -1;
		}
//		Normal flow
		else{
			arr[front] = -1;
			front++;
		}
	}
	
	void getFront(){
		if(front == -1){
			cout<<"Empty"<<endl;
		}
		else{
			cout<<arr[front]<<endl;;
		}
	}
	
	void getRear(){
		if(rear == -1){
			cout<<"Empty"<<endl;
		}
		else{
			cout<<arr[rear]<<endl;
		}
	}
	
	void getSize(){
		cout<<"Size is: "<< rear - front + 1<<endl;
	}
	
	void isEmpty(){
		if(front == -1 && rear == -1){
			cout<<"Queue is Empty"<<endl;
		}
		else{
			cout<<"Queue is not empty"<<endl;
		}
	}
	
	void Print(){
		for(int i = 0; i<n; i++){
			cout<<arr[i]<< " ";
		}
		cout<<endl;
	}
};


int main(){
	Queue q(5);
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.Print();
	q.pop();
	q.Print();
	q.isEmpty();
	q.getSize();
	
	q.getFront();
	q.getRear();
	
	return 0;
}
