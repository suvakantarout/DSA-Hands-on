#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<string, string> table;
	
	table["in"] = "india";
	table.insert(make_pair("en", "England"));
	table.insert(make_pair("in", "India"));
	table.insert(make_pair("h", "Hongkong"));
	
	cout<<table.size()<<endl;
	
//	table.clear();
	
	cout<<table.at("in")<<endl;
	
	unordered_map<string, string>:: iterator it;
	for(int it = table.begin(); it<= table.end(); it++){
		cout<<*it<<endl;
	}
	
	if(table.find("in") != table.end()){
		cout<<"Key found"<<endl;
	}
	else{
		
		cout<<"Key not found";
	}
	
//	table.count();
//	
	if(table.count("in") == 0){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Not found";
	}
	
	
	return 0;
}
