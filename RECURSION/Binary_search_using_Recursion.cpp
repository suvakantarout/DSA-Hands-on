//Binary Search using recursion

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size,int target,int s,int e){
//	Base case
	if(s > e){
		return -1;
	}
	
//	Processing
	int mid = (s+e-s)/ 2;
	if(arr[mid] == target){
		return mid;
	}
	else if(arr[mid] < target){
		s = mid + 1;
//		return BinarySearch(arr,size,target,s,e);
	}
	else if(arr[mid] > target){
		e = mid - 1;
//		return BinarySearch(arr,size,target,s,e);
	}
	
//	Recursive Relation
	return BinarySearch(arr,size,target,s,e);
	
}


int main(){
	int arr[] = {10,20,30,49,50,60,70,90};
	int size = 8;
	int target = 49;
	int s = 0;     //Start
	int e = size - 1;   //end
	
	int ans = BinarySearch(arr,size,target,s,e);
	cout<<"Answer index: "<<ans<<endl;

	
	return 0;
}
