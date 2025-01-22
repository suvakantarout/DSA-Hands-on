#include<iostream>
#include<vector>
#include<stack>
//#include<algorithm>
using namespace std;

void solve(vector<int> &v, stack<int> &s, vector<int> &ans){
	
	for(int i = v.size() - 1; i >= 0; i--){
		int element = v[i];
		if(s.top() >= element){
			s.pop();
		}
//		Agar yanha tak pahanch gaye to stack top me small element mil gaya hai
//		To uss element ko store krna hai
		ans.push_back(s.top());
		
//		Checked element ko vi stack me push kro
		s.push(element);
	}
}
int main(){
//	Given vector
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
//	Stack for solving and getting the answer
	stack<int>s;
	s.push(-1);
	
//	Vector for storing the ans
	vector<int>ans;
	
//	Solvev function call
	solve(v,s,ans);
	
	for(int i = ans.size() - 1; i >= 0; i--){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
