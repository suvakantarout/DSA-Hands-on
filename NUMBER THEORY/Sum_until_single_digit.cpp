#include<iostream>
using namespace std;

int Sum0fDigits(int n){
	long int sum = 0;
	while( n > 0){
		int digit  = n % 10;
		sum += digit;
		n /= 10;
		if(n < 10){
			break;
		}
	}
	return sum;
}

int main(){
	
	long int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	int ans = Sum0fDigits(n);
	cout<<"Sum until single digit found =  "<<ans;
	
	return 0;
}
