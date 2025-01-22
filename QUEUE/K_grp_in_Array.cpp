#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	
	int size = v.size();
	int k = 2;
	int split = size / k;
	
//	Queue 0
	queue<int> Q0;
	int ele;
	for(int i = 0; i<split; i++){
		ele = v.at(i);
		Q0.push(ele);
	}
	cout<<"Queue 1: ";
	while(!Q0.empty()){
		cout<<Q0.front()<<" ";
		Q0.pop();	
	}
	
	cout<<endl;
	
//	Queue 1
	queue<int>Q1;
	for(int i = split; i<v.size(); i++){
		ele = v.at(i);
		Q1.push(ele); 
	}
	cout<<"Queue 2: ";
	while(!Q1.empty()){
		cout<<Q1.front()<<" ";
		Q1.pop();
	}
	
	
	
	return 0;
}










