#include<iostream>
using namespace std;

int factorial(int n){
//	base case
	if(n == 0 || n == 1){
		return 1;
	}
	
//	Recursive call
//	factorial(n - 1);  // Head recursion)
	
//	Processing
	int ans = n * factorial(n - 1); 
	
	return ans;
}

int main(){
	
	int n;
	cout<<"Enter a number to find the factorial: ";
	cin>>n;
	
	int ans = factorial(n);
	cout<<"Factorial of "<<n <<" is: "<<ans;
	
	return 0;
}
