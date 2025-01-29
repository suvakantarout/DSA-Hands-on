#include<iostream>
using namespace std;

int totalSum(int arr[], int size){
	int totalsum = 0;
	for(int i =0; i<size; i++){
		totalsum += arr[i];
	}
	return totalsum;
}

int Min(int arr[], int size){
	int min = arr[0];
	for(int i = 0; i<size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int Max(int arr[], int size){
	int max = arr[0];
	for(int i = 0; i<size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[] = {1,3,5,7,9};
	int size = 5;
	
	int max = Max(arr,size);
	int min = Min(arr,size);
	int total = totalSum(arr,size);
	
	int maxsum = total - min;
	cout<<"Max sum = "<<maxsum<<endl;
	
	int minsum = total - max;
	cout<<"Min sum = "<<minsum;
	
	return 0;
}
