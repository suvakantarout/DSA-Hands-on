#include<iostream>
using namespace std;
 
int main(){
	
//	Creating a string
	string str;
	
//	str.push_back('S');
//	str.push_back('U');
//	str.push_back('N');
//	str.push_back('I');
//	str.push_back('T');
//	str.pop_back();
//	cout<<"Enter the input"<<endl;
//	getline(cin, str,'\n' );
//	cout<<"String is: "<<str<<endl;
	
	auto it;
	for(it = str.begin(); it < str.end(); it++){
		cout<< *it<<endl;
	}
	
	
	return 0;
} 
