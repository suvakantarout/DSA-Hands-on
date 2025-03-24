#include<iostream>
using namespace std;

int DigitCount(int n, int c){
	// int digit = 0;
	
	if(n == 0){
		return c;
	}
	
	n /= 10;
	c++;

	return DigitCount(n, c);
	
}
int main(){
	int n = 2372999999;
	int c = 0;
	int ans = DigitCount(n,c);
	cout<<"Number of digits present is: "<<ans;
	
	return 0;
}
