//Reverse the stack

#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<"Original stack is"<<endl;
	
	stack<int> st;
	while(!s.empty()){   // while/Until stack s is not empty
		st.push(s.top());
		s.pop();
	}
	
	cout<<"Reversed stack is: "<<endl;
	while(!st.empty()){    //While / until stack st is not empty
		cout<<st.top()<<endl;
		st.pop();
	}
	return 0;
	
}
