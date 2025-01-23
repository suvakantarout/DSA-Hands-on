//print all Odd numbers present in the array

#include<iostream>
using namespace std;

void PrintOdd(int arr[], int size,int index){
//	Base case
	if(index == size){
		return;
	}
	
	if(arr[index] % 2 != 0){
		cout<<arr[index]<<" ";
	}
	
//	Recursive Relation
	PrintOdd(arr,size,index+1);
}



int main(){
	int arr[] = {2,1,9,3,5,6,8};
	int size = 7;
	int index = 0;
	
	PrintOdd(arr,size,index);
	return 0;
}
