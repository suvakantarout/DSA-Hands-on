//Find the sum of all divisors of a number.

#include<iostream>
using namespace std;

int Divisors(int n){
	int sum = 0;
	for(int i = 1; i<=n; i++){
//		int divisor = n / i;
		if(n % i == 0){
			cout<<i<<" ";
			sum += i;
			
		}
	}
	return sum;
}


int main(){
	int n;
	cout<<"Enter a numeber: ";
	cin>>n;
	
	cout<<"All divisors are: ";
	int ans = Divisors(n); 
	cout<<"\nSum of devisiors = "<<ans;
	
	return 0;
} 
