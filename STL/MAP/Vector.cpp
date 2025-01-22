#include<iostream>
#include<vector>
using namespace std; 

void print(vector<int> v){
	int size = v.size();
	for (int i =0 ; i<size; i++){
//		cout<<v[i]<<endl;
//				or
		cout<<v.at(i)<<endl;
	}
}
int main(){
	vector<int> v;
//	push elements into the vector
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	
//	pop elements in to the vector
	v.pop_back();
	v.pop_back();
	
	print(v);
	return 0;
}


