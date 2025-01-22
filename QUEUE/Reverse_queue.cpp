#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void Bprint(queue<int> q){       // Before Reverse
	cout<<"Before Reverse: ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
} 
void Reversequeue(queue<int>&q){
	stack<int>s;
	while(!q.empty()){
		int ele = q.front();
		q.pop();
		
		s.push(ele);
	}
	
	while(!s.empty()){
		int ele = s.top();
		s.pop();
		
		q.push(ele);
	}	
}

void Aprint(queue<int>&q){    // After Reverse
	cout<<"After reverse: ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
} 
int main(){
	
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	Bprint(q);
	Reversequeue(q);
	Aprint(q);

	return 0;
}
