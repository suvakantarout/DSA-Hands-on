#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int>q;
	q.push(10);
	q.push(50);
	q.push(20);
	q.push(30);
	q.push(60);
	
	cout<<q.size()<<endl;
	
	if(q.size() == q.empty()){
		cout<<"Queue is empty";
	}
	else{
		cout<<"Not empty";
	}
	
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
	
	queue<int>q1;
	q.push(100);
	q.push(500);
	
	queue<int>q2;
	q.push(300);
	q.push(600);
	
	q1.swap(q2);
//	q1.swap(q)
	cout<<q.front()<<" "<<q.back()<<endl;
		
	return 0;
}	
