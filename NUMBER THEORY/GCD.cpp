//find GCD -> Greatest common divisor of a number ?

#include<iostream>
using namespace std;

int GCD(int m, int n){
	int GCD = 1;
	int min;
	(m<n)?min= m : min = n;
	
	for(int i = 1; i<=min; i++){
		if(m % i == 0 && n % i == 0){
			GCD = i;
		}
	}
	return GCD;
	
}

int main(){
	int m,n;
	cout<<"Enter two number: "<<endl;
	cin>>m>>n;
	
	int ans = GCD(m,n);
	cout<<"Greatest common divisor = "<<ans;
	
	return 0;
}
