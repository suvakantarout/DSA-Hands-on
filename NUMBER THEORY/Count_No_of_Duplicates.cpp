//Write a program to count the number of dupliactes present

#include<iostream>
using namespace std;

int CheckDuplicate(int n){
	int arr[20] = {0};
	int size = 20;
	
//	this loop will iterate over the number to count the frequency
	while(n > 0){
		int digit = n % 10;
		arr[digit]++;
		n = n / 10;
	}
	int count = 0;
//	This Loop will iterate over the Array to check how many frequencies are there
	for(int i = 0; i<size; i++){
		if(arr[i] > 1 ){
			count++;
		}
	}
	
	return count;
	
}


int main(){
	int n;
	cout<<"Enter a number having duplicate digits: ";
	cin>>n;
	
	int ans  = CheckDuplicate(n);
	cout<<"Duplicate count = "<<ans;
	
	return 0;
}
