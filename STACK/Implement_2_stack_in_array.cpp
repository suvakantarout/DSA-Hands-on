//Insert 2 stacks in a single array.

#include<iostream>
using namespace std;
class Stack{
	
	public:
		int top1;
		int top2;
		int size;
		int* stack;
		
		Stack(int capacity){
			size = capacity;
			stack = new int[capacity];
			top1 = -1;
			top2 = size;
		}
		
		void pushTop1(int value){
			if(top2 - top1 == 1){
				cout<<"Stack Overfow"<<endl;
			}
			else{
				top1++;
				stack[top1] = value;
			}
		}
		
		void pushTop2(int value){
			if(top2 - top1 ==  1){
				cout<<"Stack Overflow"<<endl;
			}
			else{
				top2--;
				stack[top2] = value;
			}
		}
		
		void pop1(int value){
			if(top1 == -1){
				cout<<"Underflow"<<endl;
			}
			else{
				stack[top1] = 0;
				top1--;
			}
		}
		
		void pop2(int value){
			if(top2 == size){
				cout<<"UNDERFLOW"<<endl;
			}
			else{
				stack[top2] = 0;
				top2++;
			}
		}
		
		int printStack(){
			for(int i = 0; i<size;i++){
				cout<<stack[i]<<" ";
			}
		}
};




int main(){
	Stack s(5);
	s.pushTop1(1);
	s.pushTop1(2);
//	s.pushTop1(3);
//	s.pushTop1(4);
//	s.pushTop1(5);
	s.printStack();
	
	s.pushTop2(10);
//	s.pushTop2(20);
//	s.pushTop2(30);
//	s.pushTop2(40);
//	s.pushTop2(50);
	s.printStack();
//	
	return 0;
}
