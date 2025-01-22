#include<iostream>
using namespace std;

void MaxEle(int arr[], int size,int index,int &max){
//	BASE CASE
	if(index == size){
		return;
	}
	
//	PROCESSING
	if(arr[index] > max){
		max = arr[index];
	}	
	
//	RECURSIVE RELATION
	MaxEle(arr,size, index + 1,max);
}

int main(){
	int arr[] = {100,20,3000,40,500};
	int size = 5;
	int index = 0;
	int max = arr[index];
	
	MaxEle(arr,size,index,max);
	cout<<"Max element is: "<<max;
	
	return 0;
	
}
