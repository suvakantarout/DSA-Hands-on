//Insert an element in a sorted stack according to sorted order

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
	
	int value = 23;
	
	stack<int> st; //Temporary stack
	
	while(!s.empty() && s.top() < value){
		st.push(s.top());
		s.pop();   // Pop elements from `s` as they are moved to `st`
	} 
	
	s.push(value);   //Push the new value into the original stack
	
	while(!st.empty()){
		s.push(st.top());
		st.pop();
	}
	
	cout<<"Final stack is: "<<endl;
	while(!s.empty()){    //While / until stack s is not empty
		cout<<s.top()<<endl;
		s.pop();
	}
	
	return 0;
}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main() {
//    stack<int> s;
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    s.push(40);
//    s.push(50);
//
//    int value = 23;
//
//    stack<int> st; // Temporary stack to hold elements
//
//    // Transfer elements from `s` to `st` until `value` can be inserted
//    while (!s.empty() && s.top() > value) {
//        st.push(s.top());
//        s.pop();
//    }
//	
//    s.push(value); // Push the new value into the stack
//
//    // Move elements back from `st` to `s`
//    while (!st.empty()) {
//        s.push(st.top());
//        st.pop();
//    }
//
//    // Print the final stack
//    cout << "Final stack is: " << endl;
//    while (!s.empty()) {
//        cout << s.top() << endl;
//        s.pop();
//    }
//
//    return 0;
//}

