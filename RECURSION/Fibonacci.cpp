#include<iostream>
using namespace std;

int fib(int n){
//	if(n == 0){
//		return 0;
//	}
//	if(n == 1){
//		return 1;
//	}

//	Base case
	if(n == 0 || n == 1){
		return n;
	}

//	Recursive relation
	fib(n-1);
	fib(n-2);
	
	//	Processing
	int ans = fib(n-1)+ fib(n-2);

	return ans;
}


int main(){
	
	int n;
	cout<<"Entet a number: ";
	cin>>n;
	
	int ans = fib(n);
	cout<<ans;
	return 0;
}
