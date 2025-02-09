#include<iostream>
using namespace std;

int HCF(int n,int m){
	int HCF = 0;
	for(int i = 1; i<=n && i<=m; i++){
		if(n % i == 0 && m % i == 0){
			HCF = i;
		}
	}
	return HCF;
}

int main(){
	int n,m;
	cout<<"Enter two numbers: ";
	cin>>n>>m;
	
	int ans  = HCF(n,m);
	cout<<"HCF is: "<<ans<<endl;
	
	//Formula for LCM if the HCF is already given ==> [ n * m / HCF ]
	cout<<"LCM is: "<<n * m / ans;
	return 0;
}
