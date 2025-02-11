#include<iostream>
#include<Algorithm>
using namespace std;

int main(){
	
	int arr[6] = {34,21,56,23,22,65};
	int n = 6;
	sort(arr,arr+n);
	
	for(int x : arr){
		cout<< x <<endl;
	}
	
	return 0;
}
