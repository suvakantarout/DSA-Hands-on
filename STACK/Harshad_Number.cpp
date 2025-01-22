//Harsad Number

#include<iostream>
using namespace std;

int HarshadNumber(int num){
	int sum = 0;
	while(num > 0){
		int digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	return sum;
}

int main(){
	
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	
	int digitsum = HarshadNumber(num);
	
	if(num % digitsum == 0){
		cout<<"Hrshad Number"<<endl;
	}
	else{
		cout<<"Not Hrshad number"<<endl;	
	}
	
	
	return 0;
}


