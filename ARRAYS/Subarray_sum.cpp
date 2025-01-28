//if the sub array sum is equals to target print all the subarrays.

#include<iostream>
using namespace std;
int SubarraySum(int arr[], int size){
	int sum = 0;
	for(int i = 0; i<size; i++){
		for(int j = i; j<size; j++){
			sum += arr[i];
		}
 	}

	return sum;
}

int main(){
	int arr[] = {1,2,3,4};
	int size = 4;
	int target = 20;
	
	int ans = SubarraySum(arr,size);
//	cout<<ans;
		
	if(ans == target){
		for(int i = 0; i<size; i++){      // for one value of i, j  will run n times
			for(int j = i; j<size; j++){   // j always starts from i and goes upto end
				for(int k = i; k<=j;k++){   // K loop for printing the sub array
					cout<<arr[k]<<" ";
				}cout<<endl;
			}
		}
	}
	
	return 0;
}
