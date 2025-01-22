#include<iostream>
using namespace std;

class Dequeue {
private:
    int *arr;
    int n;
    int front;
    int rear;

public:
    Dequeue(int size) {
        arr = new int[size];
        this->n = size;
        front = -1;
        rear = -1;
    }

    void push_front(int value) {
        // overflow
        if (front == 0) {
            cout << "Overflow";
            return;
        }
        // pushing the first element into the queue
        else if (front == -1 && rear == -1) {
            front = 0;
            arr[front] = value;
            rear = 0;
        }
        // Normal flow
        else {
            front--;
            arr[front] = value;
        }
    }

    void push_back(int value) {
        // overflow
        if (rear == n - 1) {
            cout << "Overflow";
            return;
        }
        // pushing the first element into the queue
        else if (front == -1 && rear == -1) {
            rear = 0;
            arr[rear] = value;
            front = 0;
        }
        // Normal flow
        else {
            rear++;
            arr[rear] = value;
        }
    }

    void pop_front() {
        // Underflow
        if (front == -1 && rear == -1) {
            cout << "Underflow";
            return;
        }
        // single element
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // Normal flow
        else {
            arr[front] = -1;
            front++;
        }
    }

    void pop_back() {
        // underflow
        if (front == -1 && rear == -1) {
            cout << "Underflow";
            return;
        }
        // single element
        else if (front == rear) {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        // Normal flow
        else {
            arr[rear] = -1;
            rear--;
        }
    }

    void print() {
		for(int  i = 0; i<n; i++){
			cout<<arr[i]<< " ";
		}
		cout<<endl;
    }
};

int main() {
	
    Dequeue dq(5);
    
	dq.push_front(10);
	dq.push_front(20);
	dq.push_front(30);
	dq.print();
	
	dq.push_back(40);
	dq.push_back(50);
	dq.print();
	
	dq.pop_back();
	dq.print();
	
    return 0;
    
}

