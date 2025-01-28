//Rotate in same array using a single loop

#include<iostream>
using namespace std;

void RotateArr(int arr[],int i,int j){
//	int i = 0;
//	int j = size -1;
	while(i < j){
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
//	int k = 0;
//	int l = pos - 1;
//	while( k < l){
//		int temp;
//		temp = arr[k];
//		arr[k] = arr[l];
//		arr[l] = temp;
//		k++;
//		l--;
//	}
//	
//	int m = pos;
//	int n = size -1;
//		while( m < n){
//		int temp;
//		temp = arr[m];
//		arr[m] = arr[n];
//		arr[n] = temp;
//		m++;
//		n--;
//	}
//	

}


int main(){
	int arr[] = {1,2,3,4,5};
	int size = 5;
	int pos = 2;
	
//	RotateArr(arr,size,pos);

	RotateArr(arr,0,size-1); // Rotate main array--> 5,4,3,2,1
	RotateArr(arr,0,pos-1);  // 4,5,3,2,1
	RotateArr(arr,pos,size-1); // 4,5,1,2,3
	
		
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
	return 0;
}
