#include<iostream>
using namespace std;

void Merge(int arr[], int s, int e){
	int mid = (s + e - s) / 2;
	
	int len1 = mid - s + 1;
	int len2 = e - mid;
	
//	create two new array
	int *newarr1 = new int[len1];
	int *newarr2 = new int[len2];
	
//	copy elements from left array to newarray1
	int unsortedarrayindex = s;     // main array index
	for(int i = 0; i<len1; i++){
		newarr1[i] = arr[unsortedarrayindex];
	}
	
//	copy elements from left array to newarray1
	unsortedarrayindex = mid +1;
	for(int i = mid +1; i<len2; i++){
		newarr2[i] = arr[unsortedarrayindex];
	}
	
//	Merge both newarray1 and newarray2
	int index1 = 0;
	int index2 = 0;
	unsortedarrayindex = s;
	
	while(index1 < len1 && index2 < len2)
	{
		if(newarr1[index1] < newarr2[index2]){
			arr[unsortedarrayindex++] = newarr1[index1++];
		}
		else{
			arr[unsortedarrayindex++] = newarr2[index2++];
		}
	}
	
	while(index1 < len1)
	{
		arr[unsortedarrayindex++]= newarr1[index1++];
	}
	while(index2 < len2)
	{
		arr[unsortedarrayindex++]= newarr2[index2++];
	}
	
}

void Mergesort(int arr[], int s, int e){
//	BASE CASE
	if(s >= e){
		return;
	}
	
	
//	PROCESSING
	int mid = (s + e - s) / 2;
	
//	RECURANCE RELATION
//	Sort the left part of the array
	Mergesort(arr,s,mid);
	
//	Sort the right part of teh array
	Mergesort(arr,mid+1,e);
	
//	Merg left and right array
	Merge(arr,s,e);
	
}


int main(){
	int arr[8] = {38,27,43,3,9,82,10,2};
	int size = 8;
	int start = 0;
	int end = size - 1;
	
	Mergesort(arr,start,end);
	
	for(int  i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	return 0;
}
