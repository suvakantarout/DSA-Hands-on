#include<iostream>
using namespace std;

void printAllPairs(int a[],int size){
	for(int i = 0; i<size;i++){
		for(int j =0; j<size;j++){
			cout<<a[i]<<", "<<a[j]<<endl;
		}
	}
}
int main(){
	int a[100],size;
	cout<<"Enter size: ";
	cin>>size;
	cout<<"Enter array elements: "<<endl;
	for(int i =0; i<size; i++){
		cin>>a[i];
	}
	
	printAllPairs(a,size);
}
