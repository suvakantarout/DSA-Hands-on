#include<iostream>
using namespace std;

void BubbleSort(int a[],int size){
	for(int i = 0; i<size -1; i++){
		for(int j = 0; j< (size - i - 1); j++){
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void print(int a[], int size){
	for(int i = 0; i<size; i++){
		cout<<a[i]<<" ";
	}
}



int main(){
	int a[] = {-5,4,3,2,1};
	int size = 5;
	
	BubbleSort(a,size);
	cout<<"Sorted array is: "<<endl;
	print(a,size);
	
	return 0;
}

