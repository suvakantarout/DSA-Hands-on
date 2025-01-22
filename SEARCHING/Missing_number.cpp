#include<iostream>
using namespace std;
int findMissingNum(int a[], int n){
	int s = 0; int e = n -1;
	int ansIndex;
	while(s >= e){
		int mid = s + (e - s) / 2;
		int number = a[mid];
		int index = mid;
		
		if(number - index == 0){
			s = mid +1;
		}
		else if(number - index == 1){
			ansIndex = index;
			e = mid -1;
		}
		if(ansIndex == -1){
			return n;
		}
	}
	return ansIndex;
}
int main(){
	int a[] = {0,1,2,3,4,6,7,8};
	int n = 8;
	
	
	int ans = findMissingNum(a,n);
	cout<<"Missing ele is: "<<ans;
	return 0;
}
