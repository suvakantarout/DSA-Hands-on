#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
	
	unordered_map<string, string> table;
	
//	Insertion
	table["in"] = "india";     // Process-1
	
	pair<string, string>p      // Process-2
	p.first = "en";
	p.second = "England";
	table.insert(p);
	pair<string, string>q;
	q.first = "h";
	q.second = "Hongkong";
	table.insert(q);
	
	cout<<table.size()<<endl;
	
//	table.clear();
	
	cout<<table.at("in")<<endl;


//	Traversing through a map

//	unordered_map<string, string>:: iterator it;
//	for(int it = table.begin(); it<= table.end(); it++){
//		cout<<*it<<endl;
//	}
	for(auto it : table){
		cout<<it.first <<"->" <<it.second<<endl;
	}
	
	
//	Finding key
	if(table.find("in") != table.end()){
		cout<<"Key found"<<endl;
	}
	else{
		
		cout<<"Key not found";
	}
	
	
//	counting the key
//	table.count();
	if(table.count("in") == 0){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Not found";
	}
	
	
	return 0;
}
