//Check an array is sorted or not using Recursion

#include<iostream>
using namespace std;

bool CheckSorted(int arr[], int size, int index){
	if(index == size - 1){
		return true;
	}
	
	bool MyAns = false;
	bool RecurAns = false;
	if(arr[index] <= arr[index  + 1]){
//		return true;
		MyAns =  true;
	}
	
	CheckSorted(arr,size,index+1);
	if(MyAns == true && RecurAns == true){
		return true;
	}
	else{
		return false;
	} 
}

int main(){
	int arr[] = {10,15,20,30,688,90};
	int size = 6;
	int index = 0;
	
	bool ans = CheckSorted(arr,size,index);
	cout<<ans;

	
	return 0;
}
