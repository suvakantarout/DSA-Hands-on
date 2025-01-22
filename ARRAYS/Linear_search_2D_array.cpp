#include<iostream>
using namespace std;
int LinearSearch(int a[][3],int i,int j,int target){
	for(int i =0 ; i<3; i++){
		for(int j =0; j<3; j++){
			if(a[i][j] == target){
				return true;
			}
		}
	}
	return false;
}
	

int main(){
	int a[3][3],i, j,target;
	cout<<"Enter array elements: "<<endl;
	for(i =0; i<3; i++){
		for(j = 0; j<3; j++){
			cin>>a[i][j];
		}
	}
	cout<<"Array elements are: ";
	for(i = 0; i<3; i++){
		cout<<"\n";
		for(j =0; j<3; j++){
			cout<<a[i][j]<<"\t";
		}
	}
	cout<<"\nEnter target element: ";
	cin>>target;
	
	int A = LinearSearch(a,i,j,target);
	cout<<A;
	
	return 0;
}
