//Linear Search
#include<iostream>
using namespace std;

bool Linear_search(int a[],int key,int size){
	for(int i = 0; i<size; i++){
		if(a[i] == key){
			return true;
		}
		
	}
	return false;
}

int main(){
	int a[50],size,key;
	cout<<"Enter the size of an array: "<<endl;
	cin>>size;
	cout<<"Enter the array elements: "<<endl;
	for(int i = 0; i < size; i++){
		cin>>a[i];
	}
	cout<<"Enter the number to search: ";
	cin>>key;
	int result = Linear_search(a,key,size);
	cout<<result<<endl;

    return 0;
}
