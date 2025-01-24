#include<iostream>
using namespace std;
int getsum(int n){
//	Base case
	if(n == 0){
		return 0;
	}
	
//	Recursive Relation
	getsum(n - 1);
	
//	Processing
	int ans = getsum(n-1)  + n;
	
	return ans;
}



int main(){
	
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int ans = getsum(n);
	cout<<"Sum of numbers is: "<<ans;
	return 0;
}
