//FIND LCM => Longest Common Multiple.

#include<iostream>
using namespace std;

int LCM(int n, int m){
	int LCM = 1;
	int max;
	if(n < m){
		max = n;
	}
	else if(m<n){
		max = m;
	}
	for(int i = 1; i<=max;i++){
		if( (n % i == 0 && m % i == 0) || (n % i == 0 || m % i == 0)){
			LCM *= i;
		}
	}
	return LCM;
}

int main(){
	int n,m;
	cout<<"Enter a 2 numbers for LCM: "<<endl;
	cin>>n>>m;
	
	int ans = LCM(n,m);
	cout<<"LCM is: "<<ans;
	return 0;
}
