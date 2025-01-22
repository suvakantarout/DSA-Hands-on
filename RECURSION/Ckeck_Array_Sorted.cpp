#include<stdio.h>
#include<vector>

using namespace std;

bool isSorted(vector<int> v, int n){
	if( n == 0 || n == 1){
		return true;
	}
	
//	Recursive relation
	isSorted(arr, n - 1);
//	processing
	int ans = v[n-1] >= v[n -2];
	return ans;
	
}

int main(){
	vector<int>v = {1,2,3,4,5};
//	int size;
//	cout<<"Enter size of the vector: ";
//	cin>>size;
//	cout<<"Enter array elements: ";
//	for(int i = 0; i<v.size(); i++){
//		cin>>v[i];
//	}
	cout<<isSorted[v,v.size()]<<endl;
	
	retrun 0;
}
