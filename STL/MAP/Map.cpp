#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
	
	unordered_map<string, string> table;
	
//	INSERTION
	table["in"] = "india";     // Process-1
	
	pair<string, string>p;      // Process-2
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


//	TRAVERSING THROUGH A MAP

	// USING AN ITERATOR
	// unordered_map<string, string>:: iterator it;
	// for(int it = table.begin(); it <= table.end(); it++){
	// 	int key = it->first;
	// 	int value = it->second;
	// 	cout<<"key: "<<key<<" "<<"value: "<<value<<endl;
	// }

	// USING FOREACH LOOP
	for(auto it : table){  //auto wil automatically detect the type of the MAP.
		cout<<it.first <<" -> " <<it.second<<endl;
	}
	
	
	// FINDING KEY
	if(table.find("in") != table.end()){
		cout<<"Key found"<<endl;
	}
	else{
		cout<<"Key not found";
	}
	
	// ERASE ELEMENT FROM MAP
	table.erase("in");
	for(auto it : table){
		cout<<it.first <<" -> " <<it.second<<endl;
	}

	
	// COUNTING KEY
	//	table.count();
	if(table.count("in") == 0){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Not found";
	}
	
	
	return 0;
}
