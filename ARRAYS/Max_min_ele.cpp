#include<iostream>
using namespace std;
int maxele(int a[],int size){
	int max = a[0];
	for(int i =0; i<size; i++){
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int minele(int a[],int size){
	int min = a[0];
	for(int i = 0; i<size; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	return min;
}
int main(){
	int a[100],size;
	cout<<"Enter the size of an array: ";
	cin>>size;
	cout<<"Enter the array elements: ";
	for(int i = 0; i<size;  i++){
		cin>>a[i];
	}

	int max = maxele(a,size);
	cout<<"Maximum element is: "<<max<<endl;
	
	int min = minele(a,size);
	cout<<"Minimum element is: "<<min<<endl;
	if(max == min){
		cout<<"Both are same";
	}
	return 0;
}
