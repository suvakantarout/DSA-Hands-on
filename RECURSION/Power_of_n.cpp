#include<iostream>
using namespace std;

int pow(int n){
//	Base case
	if(n == 0){
		return 1;
	}
	
//	Recursive relation
//	pow(n  - 1);
//	Processing
//	int ans = 2 * pow(n - 1);
//			OR

//Recursive relation & Processing at a time
	int ans = 2 * pow(n - 1);
	return ans;
}

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int ans = pow(n);
	cout<<"power of"<<n<<"is: "<<ans;
	
	
	
	return 0;
}
