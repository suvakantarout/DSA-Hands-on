#include<iostream>
#include<set>
using namespace std;

int main(){
	
//	unordered_set<int> s;  ==> print elements in random order
	set<int> st;
	
	st.insert(10);
	st.insert(15);
	st.insert(8);
	st.insert(4);
	st.insert(100);
	
	//traversal
	for(auto it : st){
		cout<<it<<" ";	
	}cout<<endl;
	
	// Get size
	cout<<st.size() <<endl;
	// clear the set
	st.clear();
	cout<<st.size()<<endl;
	
	// check empty or not
	st.empty() ? cout<<"SET is empty": cout<<"Not empty";

	//earse elements  from the set
	st.erase(st.begin(),st.end());
	cout<<endl;
	cout<<st.size()<<endl;
	
	
	// st.find()
	if(st.find(15) != st.end()){
		cout<<"Found";
	}
	else{
		cout<<"Not found"<<endl;
	}
	

	// st.count()
	if(st.count(15) == 1){
		cout<<"found";
	}
	else{
		cout<<"Not found";
	}

	return 0;
}
