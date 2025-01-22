#include<iostream>
using namespace std;
int NearlySorted(int a[], int size,int target){
	int s= 0;
	int e = size -1;
	while(s <= e){
		int mid = s + (e - s)/ 2;
		if(a[mid] == target){
			return mid;
		}
		if(a[mid - 1] == target){
			return mid-1;
		}
		if(a[mid + 1]== target){
			return mid+1;
		}
		
		if(a[mid] > target){
			e = mid - 2;
		}
		else{
			s = mid + 2;
		}
	}
	return -1;
}
int main(){
	int a[] = {10,3,20,40,50,80,70};
	int size = 7;
	int target = 40;
	
	int ans = NearlySorted(a,size,target);
	cout<<"Found at index: "<<ans<<endl;

	
	return 0;
}
