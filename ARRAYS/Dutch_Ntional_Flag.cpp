//DUTCH NATIONAL FLAG ALGO
//Move all the Negatives to Left side of an array

#include<iostream>
using namespace std;

NegativeLeft(int aa[],int size){
	int i =0; int j = size -1;
	for(int i = 0; i<j;){
		if(aa[i] < 0){
			i++;
		}
		else if(aa[j] > 0){
			j--;
		}
		else{
			int temp;
			temp = aa[i];
			aa[i] = aa[j];
			aa[j] = temp;
		}
	}
}

int main(){
	int aa[100], size;
	cout<<"Enter size: ";
	cin>>size;
	
	cout<<"Enter array elements: "<<endl;
	for(int i =0; i<size; i++){
		cin>>aa[i];
	}
	
	NegativeLeft(aa,size);
	cout<<"Array is: "<<endl;
	for(int i  =0; i<size; i++){
		cout<<aa[i]<<" ";
	}
	
	return 0;
}
