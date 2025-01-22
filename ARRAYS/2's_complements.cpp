//2's Complements
//Input vecctor size is same as the complement vector size.
#include<vector>
#include<iostream>
using namespace std;

void TowsComplement(vector<int> &v){
	for(int i = 0; i<v.size(); i++){
		if(v[i] == 0){
			v[i] = 1;
		}
		else if(v[i] == 1){
			v[i] = 0;
		}
	}
	int sum = 0;
	int carry = 1;
	for(int i =v.size() - 1; i>=0; i--){
		sum = v[i] + carry;
		v[i] = sum % 2;
		carry = sum / 2;
	}
	if(carry){
		break;
	}

}


int main(){
	 
	int size;
	cout<<"Enter the size: ";
	cin>>size;
	
	vector<int> v(size);
	cout<<"Enter vector eles in binary for 2's complement: "<<endl;
	for(int i =0; i<v.size(); i++){
		cin>>v[i];
	}
	cout<<"Vector eles are: "<<endl;
	for(int i =0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	
	TowsComplement(v);
	cout<<"\n2's complement of the veector is: "<<endl;
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	
	
	return 0;
}
