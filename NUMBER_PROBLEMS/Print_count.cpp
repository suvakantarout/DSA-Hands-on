#include<iostream>
using namespace std;

void PrintCount(int n){
//	Base case
	if(n == 0){
		return;
	}
	
//	Recuesive call
	PrintCount(n - 1);   // Tail Recursion
	
//	Processing
	cout<< n <<" ";

//for(int i = n; i>=1; i--){
//	cout<<i<<" ";
//}
//	
}


int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	PrintCount(n);
	
	return 0;
}
