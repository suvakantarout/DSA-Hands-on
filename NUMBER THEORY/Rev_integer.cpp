//Reverse a number
#include<iostream>
using namespace std;

int rev(int n){
	int prev = 0;
	while(n > 0){
		int digit = n % 10;
		prev = prev * 10 + digit; 
		n /= 10;
	}
	return prev;
}

int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	int ans = rev(n);
	cout<<"Reverse is: "<<ans;
	
	return 0;
}
