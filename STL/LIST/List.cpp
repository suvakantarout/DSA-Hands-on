#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> mylist;
	mylist.push_back(20);
	mylist.push_back(40);
	mylist.push_back(50);
	mylist.push_back(90);
	
	mylist.push_front(100);
	mylist.push_front(1);
	
	mylist.pop_back();
	mylist.pop_front();
	cout<<"SIZE: "<<mylist.size()<<endl;
	
//	mylist.clear();
//	cout<<"Now size: "<<mylist.size()<<endl;
//	
//	if(mylist.empty() == true){
//		cout<<"Empty";
//	}
//	else{
//		cout<<"Not empty";
//	}	   
//	cout<<mylist.front()<<endl;
//	cout<<mylist.back()<<endl;
//	
//	list<int>:: iterator it = mylist.begin();
//	while(it != mylist.end()){
//		cout<<*it<<" ";
//		it++;
//	}
	
	mylist.push_back(100);
	cout<<"SIZE: "<<mylist.size()<<endl;
	
//	list<int>:: iterator it = mylist.begin();
//	while(it != mylist.end()){
//		cout<<*it<<" ";
//		it++;
//	}
//	cout<<endl;
	
	mylist.remove(100);
	cout<<"Size: "<<mylist.size()<<endl;
	
//	list.erase();
	
	list<int> yourlist;
	yourlist.push_back(100);
	yourlist.push_back(19);	
	yourlist.push_back(30);	
	yourlist.push_back(500);

	mylist.swap(yourlist);
	
	list<int>:: iterator it1 = mylist.begin();
	while(it1 != mylist.end()){
	cout<<*it1<<" ";
	it1++;
	}
	cout<<endl;
	yourlist.swap(mylist);
	list<int>:: iterator it2 = mylist.begin();
	while(it2 != mylist.end()){
	cout<<*it2<<" ";
	it2++;
	}
	
	yourlist.insert(yourlist.begin(),1000)<<endl;
	yourlist.swap(mylist);
	list<int>:: iterator it3 = mylist.begin();
	while(it3 != mylist.end()){
	cout<<*it3<<" ";
	it3++;
	}
	return 0;
}
