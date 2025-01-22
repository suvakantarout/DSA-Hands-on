#include<iostream>
using namespace std;
void reverse(int a[],int size){
	int l = 0;
	int r = size -1;
	int temp;
	while(l < r){
		temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++;
		r--;
		
		if(l == r){
			break;
		}
	}
}

int main(){
	int a[100],size,i;
	cout<<"Enter size of an array: ";
	cin>>size;
	cout<<"Enter array elements: "<<endl;
	for(int i = 0; i<size; i++){
		cin>>a[i];
	}
	
	reverse(a,size);
	cout<<"Reverse array is: ";
	for(i =0; i<size;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
	
}
