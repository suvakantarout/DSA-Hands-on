#include<iostream>
#include<string>
using namespace std;
 
int main(){
	
//	Creating a string
	string str = "Suvakant";
	string st = "Rout";
	
//	str.push_back('S');
//	str.push_back('U');
//	str.push_back('N');
//	str.push_back('I');
//	str.push_back('T');
//	str.pop_back();
//	cout<<"Enter the input"<<endl;
//	getline(cin, str,'\n' );
//	cout<<"String is: "<<str<<endl;
	
	// Iterate the string through iterator
	auto it = str.begin();
	while(it != str.end()){
		cout<<*it;
		it++;
	}cout<<endl;

	// For each Loop
	for(auto it : str){
		cout<<it;
	}cout<<endl;
	

	// Concadinate Two strings 
	// string ans = str.append(st);
			// OR
	string ans = str + " " + st; 
	cout<<ans;
	
	return 0;
} 
