
#include<iostream>
#include<stack>
using namespace std;

void InsertAtButtom(stack<int>& s, int value){
	if(s.empty()){
		s.push(value);
		return;
	}
	int topElement = s.top();
	s.pop();
	
//	Recursion
	InsertAtButtom(s,value);
	
//	Backtracking
	s.push(topElement);
}
int main(){
	
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	
	int value = 100;   // Value insert at Buttom
	
	InsertAtButtom(s, value);
	
	while(! s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
	return 0;
}
