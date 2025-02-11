//array size n;
//return mesority element
//Array: 1 1 2 2 4 4 4 
//output: 4
#include<iostream>
using namespace std;

int majorityEle(int arr[], int n){
	unordered_map<int int>mpp;
	for(int i = 0; i<n;i++){
		mpp[arr[i]] += 1;
	}
	
	int max = 0;
	int majorityele = 0
	for(auto it : mpp){
		if(it.second > max){
			max = it.second;
			majorityele = it.first;
		}
	}
	return majorityele;
}

int main(){
	int arr[100];
	int n;
	cout<<"Enter size of an array: ";
	cin>>n;
	
	cout<<"Enter array elements: "<<endl;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Array elemets are: "<<endl;
	for(int i = 0; i<n; i++){
		cout<<arr[i];
	}
	
	int ans =  majorityEle(arr,n);
	cout<<"Majority element is: "<<ans;
	
	return 0;
}

