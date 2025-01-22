#include<iostream>
using namespace std;

int SearchArray(int arr[], int size,int index,int target){
//	BASE CASE
	if(index == size){
		return false;
	}
//	PROCESSING
	if(arr[index] == target){
		return true;
	}
	
//	RECURSIVE RELATION
	SearchArray(arr,size, index + 1, target);  // Tail Recursion
}

int main(){
	int arr[] = {10,20,30,40,50};
	int size = 5;
	int index = 0;
	int target = 100;
	
	int ans = SearchArray(arr,size,index,target);
	if(ans == true){
		cout<<"Elemet found!";
	}
	else{
		cout<<"Element Not found!";
	}
	
	return 0;
	
}
