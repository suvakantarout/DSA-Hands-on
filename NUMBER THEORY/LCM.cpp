#include<iostream>
using namespace std;

int LCM(int a, int b){
	int LCM = 1;
	for(int i = 1; i>0;i++){
		if(i % a == 0 && i % b == 0){
			LCM = i;
			break;
		}
	}
	return LCM;
}

int main(){
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	
	int ans = LCM(a,b);
	cout<<"LCM is: "<<ans;
	
	return 0;
}
