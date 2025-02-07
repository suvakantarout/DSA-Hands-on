
#include<iostream>
using namespace std;

int ArmstrongNum(int n){
	int sum = 0;
	while(n > 0){
		int digit = n % 10;
		sum += digit * digit * digit;
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	cout<<"Enter a number to check: ";
	cin>>n;
	
	int ans = ArmstrongNum(n);
	if(ans == n){
		cout<<"ARMSTRONG";
	}
	else{
		cout<<"NOT ARMSTRONG";
	}
	
	
	return 0;
}
