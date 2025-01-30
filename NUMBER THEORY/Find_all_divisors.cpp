//Find all divisors of a number give by the user and return the count of them.
#include<iostream>
using namespace std;

int Divisors(int n){
	int sum = 0;
	int count = 0;
	for(int i = 1; i<=n; i++){
//		int divisor = n / i;
		if(n % i == 0){
			cout<<i<<" ";
			count++;
//			sum += i;
			
		}
	}
	return count;
}


int main(){
	int n;
	cout<<"Enter a numeber: ";
	cin>>n;
	
	cout<<"All divisors are: ";
	int ans = Divisors(n); 
	cout<<"\nSivisors count = "<<ans;
	
	return 0;
} 
