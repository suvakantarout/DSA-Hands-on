#include<iostream>
using namespace std;
int Zeros(int a[],int size){
	int zero = 0;
	for(int i=0; i<size; i++){
		if(a[i] == 0){
		zero++;
		}
	}
	return zero;	
}
int Ones(int a[],int size){
	int one = 0;
	for(int i=0; i<size; i++){
		if(a[i] == 1){
		one++;
		}
	}
	return one;	
}

int main(){
	int a[100],size;
	cout<<"Enter the size of an array: ";
	cin>>size;
	
	cout<<"Enter array elements: "<<endl;
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	
	int zeros = Zeros(a,size);
	cout<<"Number of zeros are: "<<zeros<<endl;
	int ones = Ones(a,size);
	cout<<"Number of ones are: "<<ones;
	
	return 0;
}
