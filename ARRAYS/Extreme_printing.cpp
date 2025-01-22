//Extreme Printing

#include<iostream>
using namespace std;

void ExtremePrinting(int a[], int size){
	int l = 0;     //left
	int r = size - 1;   //right 
	while(l < r){
		cout<<a[l]<<" ";
		l++;
		cout<<a[r]<<" ";
		r--;
		
		if(l == r){
			cout<<a[l]<<" ";
		}		
	}
	
}

int main(){
	int a[100],size;
	cout<<"Enter size of an array: ";
	cin>>size;
	cout<<"Enter array elements: "<<endl;
	for(int i =0; i<size;i++){
		cin>>a[i];
	}
	
	cout<<endl;
	ExtremePrinting(a,size);
	
	return 0;
}
