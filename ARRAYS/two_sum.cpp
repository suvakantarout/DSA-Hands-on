//Using pair< > variable
#include<iostream>
using namespace std;

pair<int,int> TwoSum(int a[],int size){
	int target = 50;
	pair<int,int> ans; 
	for(int i = 0; i<size; i++){
		for(int j =0; j<size; j++){
			if(a[i] + a[j] == target){
				ans.first = a[i];
				ans.second = a[j];
				
				return ans;
			}
		}
	}
	return ans;
}
int main(){
	int a[5] = {10,20,30,40,50};
	int size = 5;
	
	pair<int,int> ans = TwoSum(a,size);
	if(ans.first == 0 && ans.second == 0){
		cout<<"Pair Not found!";
	}
	else{
		cout<<"pair Found: "<<ans.first<<", "<<ans.second;
	}
	return 0;
}


//Using array(creating an answer array)
#include<iostream>
using namespace std;

void TwoSum(int a[],int size,int ans[]){
	int target = 50; 
	for(int i = 0; i<size; i++){
		for(int j =0; j<size; j++){
			if(a[i] + a[j] == target){
				ans[0] = a[i];
				ans[1] = a[j];  
				return;	
			}
		}
	}
	return;
}
int main(){
	int a[5] = {10,20,30,40,50};
	int size = 5;
	int ans[2] = {INT_MIN, INT_MAX}
	TwoSum(a,size,ans);
	if(ans.first == 0 && ans.second == 0){
		cout<<"Pair Not found!";
	}
	else{
		cout<<"pair Found: "<<a[i]<<", "<<a[j];
	}
	
	return 0;
}

//Print all the possible pairs
#include<iostream>
using namespace std;]\

void TwoSum(int a[],int size){
	int target = 500; 
	for(int i = 0; i<size; i++){
		for(int j =0; j<size; j++){
			if(a[i] + a[j] == target){ 
				cout<<a[i]<<", "<<a[j]<<endl;
			
			}
			
		}
	}
	cout<<"Pair not found!";
}
int main(){
	int a[5] = {10,20,30,40,50};
	int size = 5;
	
	TwoSum(a,size);
	
	return 0;
}

