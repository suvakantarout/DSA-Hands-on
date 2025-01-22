#include<iostream>
using namespace std;
void PrintTriplets(int a[], int size){
	for(int i =0; i<size; i++){
		for(int j =0; j<size; j++){
			for(int k = 0; k<size; k++){
				cout<<a[i]<<", "<<a[j]<<", "<<a[k]<<endl;
			}
		}
	}
}
int main(){
	int a[] = {10,20,30,40,50,60};
	int size = 6;
	
	PrintTriplets(a,size);
	
	return 0;
}
