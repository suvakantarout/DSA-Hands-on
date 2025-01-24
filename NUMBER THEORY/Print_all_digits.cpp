//Print all the digits of a number using recursion

#include<iostream>
using namespace std;

void PrintNum(int num){
//	Base case
	if(num == 0){
		return;
	}
	
//	Processing
	int digit = num % 10;
	cout<<digit<<" ";
	
//	Recursive relation
	PrintNum(num / 10);  // For update
}


int main(){
	
	int num = 389;
	
	PrintNum(num);
	
	return 0;
}


