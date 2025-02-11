    #include<iostream>
using namespace std;

int HCF(int n,int m){
	int HCF = 1;
	int min;
	(m<n)?min= m : min = n;
	
	for(int i = 1; i<=min; i++){
		if(n % i == 0 && m % i == 0){
			HCF = i;
		}
	}
	return HCF;
}

int main(){
	int n,m;
	cout<<"Enter two numbers: "<<endl;
	cin>>n>>m;
	
	int ans  = HCF(n,m);
	cout<<"HCF is: "<<ans<<endl;
	
	//Formula for LCM if the HCF is already given ==> [ n * m / HCF ]
	cout<<"LCM is: "<<n * m / ans;
	return 0;
}
