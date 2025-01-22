#include<iostream>
using namespace std;

class CircularQ{
	public:
		int *arr;
		int n;
		int front;
		int rear;
		
	public:
		CircularQ(int size){
			arr = new int[size];
			this->n = size;
			front = -1;
			rear = -1;
		}
		
	void push(int value){
//		overflow
		if(front == 0 && rear == n-1 || rear == front - 1){
			printf("Overflow");
		}
//		single element
		if(front == rear){
			rear++;
			front++;
			arr[rear] = value;
		}
//		Circular condition
		else if(rear = n -1 && front != 0){
//			rear = front - 1;
//			arr[rear] = value;

			rear = 0;
			arr[rear] = value;
		}
//		Normal flow
		else{
			rear++;
			arr[rear] = value;
		}
	}
	
	void pop(int value){
//		Underflow
		if(front == -1 && rear == -1){
			cout<<"Underflow";
		}
//		single element
		else if(front == rear){
			arr[front] = -1;
            front = -1;
            rear = -1;
		}
//		Circular condition
		else if(front == n - 1 && rear != 0){
			arr[front] = -1;
			front = 0;
		}
//		Normal flow
		else{
			arr[front] = -1;
			front++;
		}
	}
	
	void print(){
		if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
		for(int i = 0; i<n; i++){
			cout<<arr[i]<< " ";
		}
		cout<<endl;
	}
};

int main(){
	CircularQ cq(5);
	
	cq.push(10);
	cq.push(20);
	cq.push(30);
	cq.push(40);
	cq.push(50);
	cq.print();
	
	cq.pop(10);
	cq.print();	
	
	return 0;
}
