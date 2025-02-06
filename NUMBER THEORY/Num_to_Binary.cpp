//write a program to convert a number in binary

#include<iostream>
using namespace std;
int NumToBinary(int n){
	if(n == 0){
		return 0;
	}
	else{
		return (n % 2) + 10 * NumToBinary(n / 2);
	}
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	int ans = NumToBinary(n);
	cout<<"Binary is: "<<ans;
	
	return 0;
}

