//Check prime or not

#include <iostream>
using namespace std;
int prime(int n){
	int count = 0;
	for(int i  = 1; i<=n; i++){
		if(n % i == 0){
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	int ans  = prime(n);
	if(ans != 2){
		cout<<"NOT A PRIME";
	}
	else{
		cout<<"PRIME";
	}
	
	return 0;
}
