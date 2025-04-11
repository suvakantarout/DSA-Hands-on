
//Write a program to find the sum and product of digits of a number.

#include<iostream>
using namespace std;

int SOD(int n){
	unsigned int sum = 0;
	
	while(n> 0){
		unsigned int digit = n % 10; // find last digit
		sum += digit; //Add that digit to sum
		n /= 10;  // update
	}
	return sum;
}

int POD(int n){
	unsigned int pod = 1;
	while(n > 0){
		unsigned int digit = n % 10;
		pod *= digit;
		n /= 10;
	}
	return pod;
}

int main(){
	unsigned int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	int sum  = SOD(n);
	cout<<"Sum of digits = "<<sum<<endl;
	
	int pod = POD(n);
	cout<<"Product of digits = "<<pod;
	
	return 0;
}
