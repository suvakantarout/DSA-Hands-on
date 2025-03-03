//PREFIX SUM
#include<iostream>
using namespace std;
void prefixsum(int a[],int size){
	// for(int i = 1; i<size; i++){
	// 	a[i] = a[i-1] + a[i];
	// }
	// OR
	for(int i = 0; i<size; i++){
		a[i+1] = a[i] + a[i+1];
	}
	return;
}

int  main(){
	
	int a[50], size;
	cout<<"Enter the size of an array: ";
	cin>>size;
	
	cout<<"Enter array elements: "<<endl;
	for(int i = 0; i<size; i++){
		cin>>a[i];
	}
	
	cout<<"Array is: "<<endl;
	for(int i = 0; i<size; i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl<<endl;
	cout<<"prefix sum is: "<<endl;
	prefixsum(a,size);
	for(int i = 0; i<size; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
