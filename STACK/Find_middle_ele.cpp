#include<iostream>
#include<stack>
using namespace std;

void MiddleEle(stack<int>&s, int count){
		
	int store = s.top();
	s.pop();
	count--;
	
//	Base case
	if(count == 0){
		cout<<"Middle element is: "<<s.top()<<endl;
//		return s.top();
	}
//	recursion
	MiddleEle(s,count);
	
//	Backtracking
	s.push(store);   //Here not necessary
}


int main(){
stack<int> s;
s.push(10);	
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);

int size = s.size();
int count = size / 2;

MiddleEle(s, count);

return 0;	
}
