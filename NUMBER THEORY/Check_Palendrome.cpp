//Check a number is palendrome or not.

#include<iostream>
using namespace std;

bool chkpalendrome(int n,int arr[]){
	int i = 0;
	int j = n - 1;
	while(i < j){
		if(arr[i] != arr[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int main(){
	int n;
	cout<<"Enter the number of elements of the number: ";
	cin>>n;
	
	int arr[n];  // pass the element size to the array size
	
	cout<<"Enter "<<n<<" digits: "<<endl;    //Taking input of the number using an array
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cout<<endl;
	
	for(int i = 0; i<n; i++){    //Printing the number using an array
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	
	bool ans = chkpalendrome(n,arr);
	if(ans == true){
		cout<<"PALENDROME NUMBER";
	}
	else{
		cout<<"NOT A PALENDROME";
	}
	
	return 0;
}


