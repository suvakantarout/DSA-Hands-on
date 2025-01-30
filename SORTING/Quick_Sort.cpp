#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
	int pivot = arr[s];
	int count = 0;
//	finding the pivot index
	for(int i = s+1; i<=e; i++){
		if(arr[i] <= pivot){
			count++;
		}
	}
	int pivotindex = s + count;
	
//	put the pivot element at right position
	for(int i = s; i<=e; i++){
		int temp;
		temp = arr[s];
		arr[s] = arr[pivotindex];
		arr[pivotindex] = temp;
	}
	
//	left and right wala part ko samvaloo
	int i = s;
	int j = e;
	while( i < pivotindex && j > pivotindex){
		while(arr[i] < pivot){
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}
		if(i < pivotindex && j > pivotindex){
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	return pivotindex;
}

void Quicksort(int arr[], int s, int e){
//	base case
	if(s >= e){  // s=>start e=>end
		return;
	}
	
	int p = partition(arr,s,e);
	 
	Quicksort(arr,s,p-1);
	
	Quicksort(arr,p+1,e);
}

int main(){
	int arr[5] = {2,4,1,6,9};
	int n = 5;
	
	Quicksort(arr,0,n-1);
	
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
