#include<iostream>
using namespace std;

int Colsum(int arr[][2],row,col){
	int colsum = 0;
	for(int i = 0; i<col; i++){
		for(int j = 0; j<row; j++){
			colsum += arr[i][j];
		}
	} 
	return colsum;
}

int Rowsum(int arr[][2],row,col){
	int rowsum = 0;
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			rowsum += arr[i][j];
		}
	} 
	return rowsum;
}


int main(){	
	int arr[2][2] ={{1,2},{3,4}};
	int row  = 2;
	int col = 2;
	
	int ans1 = colsum(arr,row,col);
	cout<<"Column sum is: "<<ans1;
	int ans2 = rowsum(arr,row,col);
	cout<<"Row sum is: "<<ans2;
	

	
	return 0;
}
