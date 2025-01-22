//Find first occurance of target element in an array
//Store and compute method

#include<iostream>
using namespace std;

void findFirstOccurance(int arr[],int n, int target, int &ansIndex){
	int start = 0;
	int end = 11;
	while(start <= end){
		int mid = start + (end - start) / 2;
		if(target == arr[mid]){
//			store
			ansIndex = mid;
//			compute
			end = mid - 1;  //first occurance always found in left side of the mid,As the index start from left
		}
		else if(target > arr[mid]){
			start = mid + 1;
		}
		else if(target < arr[mid]){
			end = mid -1;
		}
	}v b 
}


int main(){
	
	int arr[] = {5,10,20,20,20,20,20,30,40,50,60};
	int n = 11;
	int target = 20;
	int ansIndex = -1;  //if the target not found it will print -1
	
	findFirstOccurance(arr,n,target,ansIndex);
	cout<<"First occurance index is: " <<ansIndex <<endl;
	return 0;
}
