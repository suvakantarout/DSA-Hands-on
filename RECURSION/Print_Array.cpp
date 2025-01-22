#include<iostream>
using namespace std;

void printArray(int arr[], int size,int index){
//	BASE CASE
	if(index == size){
		return;
	}
//	PROCESSING
	cout<<arr[index]<<" ";
	
//	RECURSIVE RELATION
	printArray(arr,size, index + 1);
}

int main(){
	int arr[] = {10,20,30,40,50};
	int size = 5;
	int index = 0;
	
	printArray(arr,size,index);
	
	return 0;
	
}
