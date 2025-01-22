#include<iostream>
using namespace std;
int numZerosOnes(int a[],int size){
	int zeros = 0;
	int ones = 0;
	for(int i =0; i<size;i++){
		if(a[i] == 0){
			zeros++;
		}
		else{
			ones++;
		}

	}

//	for(int i = 0; i<zeros; i++){
//		a[i] = 0;
//	}
//	for(int i = zeros; i<size; i++){
//		a[i] = 1;
//	}
	fill(a,a + zeros, 0);
	fill(a + zeros, a + size, 1);

}

int main(){
int a[100],size;
cout<<"Enter the size of an array: ";
cin>>size;
cout<<"Enter array elements: "<<endl;
for(int i =0; i<size;i++){
	cin>>a[i];
}

int zeroone = numZerosOnes(a,size);

cout<<"Final array is: ";
for(int i = 0; i<size; i++){
	cout<<a[i]<<" ";
}
return 0;
}
