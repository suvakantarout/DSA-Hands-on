#include<iostream>
#include<Algorithm>
using namespace std;
int OddUniqueSum(int arr[], int size){
	sort(arr, arr+size);
	
	int oddsum  = 0;
	for(int i = 0; i<size; i++){
		
		if(arr[i] == arr[i+1]){
			continue;
		}
		if(arr[i] % 2 != 0){
			oddsum += arr[i];
		}	
	}
	return oddsum;
}


int main(){
	int arr[] = {9,9,1,4,5,3,3};
	int size = 7;
	

	int ans = OddUniqueSum(arr,size);
	cout<<"Odd Unique sum is: "<<ans;
	
	return 0;
}
