#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	
	v.push_back(10);
	v.push_back(30);
	v.push_back(100);
	v.push_back(130);
	v.push_back(1034);
	
	vector<int> :: iterator it = v.begin();
//	while(it != v.end()){
//		cout<< *it <<endl;
//		it++;
//	}
	for(it = v.begin(); it<=v.end(); it++){
		cout<< *it <<endl;
	}
	
	
	return 0;
}
