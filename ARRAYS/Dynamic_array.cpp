//Dynamic memory allocation

#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int *arr = new int[size];
	for(int i =0; i<size; i++){
		cin>>arr[i];
	}
	for(int i =0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0; 
}
