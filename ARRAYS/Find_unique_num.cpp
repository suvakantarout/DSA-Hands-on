#include<iostream>
using namespace std;
int uniquenumber(int a[],int size){
	int ans = 0;
	for(int i = 0; i<size; i++){
		ans = ans ^ a[i];
	}
	return ans;
}
int main(){
	int a[100],size;
	cout<<"Enter the size of an array: ";
	cin>>size;
	cout<<"Enter arrya elements: "<<endl;
	for(int i =0; i<size; i++){
		cin>>a[i];
	} 
	
	int ans = uniquenumber(a,size);
	cout<<"Unique number is: "<<ans;
	return 0;
}
