#include<iostream>
using namespace std;
class Stack{
	public:
		int* stack;  //A pointer dynamically allocate an array.
		int top;
		int size;
		
		Stack(int capacity){   //pass capacit / size of the stack through the Object.
			top = -1;       //Initally top is -1
			size = capacity;
			stack = new int[capacity];
		}
		
		
	void push(int value){
		if(top == size - 1){
			cout<<"Stack overflow"<<endl;
		}
		else{
			top++;
			stack[top] = value;   //Push the value
		}
	}
	
	void pop(int value){
		if(top == -1){
			cout<<"Stack Underflow"<<endl;
		}
		else{
			stack[top] = 0;
			top--;
		}
	}
	
	int getsize(){
		return top+1;
	}
	
	void IsEmpty(){
		if(top == -1){
			cout<<"Stack is empty"<<endl;
		}
		else{
			cout<<"Stack is not empty"<<endl;
		}
	}
	
	int getTop(){
		return top;
	}
	
	void printStack(){
		cout<<"Printing Stack"<<endl;
		for(int i = 0; i<size; i++){
			cout<<stack[i]<<" ";
//			cout<<endl;
		}
	}
	
};





int main(){
	Stack st(8);
//	st.printStack();
	
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.push(60);
	st.push(70);
	st.push(80);
	st.printStack();
	
	cout<<endl;
	cout<<"Stack top is: "<<st.getTop()<<endl;
	cout<<"Stack size is: "<<st.getsize()<<endl;
	st.IsEmpty();
	
	return 0;
}
