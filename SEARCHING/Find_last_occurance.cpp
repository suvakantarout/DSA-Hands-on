//Find last occurance of target element in an array
//Store and compute method

#include<iostream>
using namespace std;

void findLastOccurance(int arr[],int n, int target, int &ansIndex){
	int start = 0;
	int end = n -1;
	while(start <= end){
		int mid = start + (end - start) / 2;
		if(target == arr[mid]){
//			store
			ansIndex = mid;
//			compute
			start = mid + 1;  //Last occurance always found in right side of the mid,As the index ends at right.
		}
		else if(target > arr[mid]){
			start = mid + 1;
		}
		else if(target < arr[mid]){
			end = mid -1;
		}
	}
}


int main(){
	
	int arr[] = {5,10,20,20,20,20,20,30,40,50,60};
	int n = 11;
	int target = 20;
	int ansIndex = -1;  //if the target not found it will print -1
	
	findLastOccurance(arr,n,target,ansIndex);
	cout<<"Last occurance index is: " <<ansIndex <<endl;
	return 0;
}
