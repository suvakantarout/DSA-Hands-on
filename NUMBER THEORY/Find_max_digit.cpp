//Find max digit of a given number enter by user.

#include<iostream>
using namespace std;

int NextGrater(int n){
	int max = INT_MIN;
	while(n > 0){
		int digit = n % 10;
		if(digit > max){
			max = digit;
		}
		n /= 10;
	}
	return max;
}

int main(){
	int n;
	cout<<"Enter a number: ";
	scanf("%d",&n);
	
	int ans = NextGrater(n);
	cout<<ans;
	return 0;
}
