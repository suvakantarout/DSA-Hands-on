#include<iostream>
using namespace std;

int Power(int n){
//	Base case
	if(n == 0){
		return 1;
	}
	
//	Recuesive call
//	Power(n - 1); 
	
//	Processing
	int ans = 2 * Power(n - 1);
	
	return ans;
}


int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int ans = Power(n);
	cout<<"Power of "<< n <<" is: "<<ans;
	return 0;
}
