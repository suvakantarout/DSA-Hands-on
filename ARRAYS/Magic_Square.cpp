#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row size: "<<endl;
	cin>>row;
	
	int col;
	cout<<"Enter column size: "<<endl;
	cin>>col;
	
//	INPUT
	int arr[row][col];
	cout<<"Enter a 2d unit matrix elements "<<endl;
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			cin>>arr[i][j];
		}
	}
	
//	DISPLAY
	cout<<"2D unit matrix is: "<<endl;
	for(int i = 0; i<row; i++){
		for(int j = 0; j<col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

//	LEFT DIAGONAL
	int leftdiasum = 0;
	for(int i = 0; i<row; i++){
		for(int j = 0; j < col; j++){
			if(i == j){
				leftdiasum += arr[i][j];
			}	
		}
	}
	cout<<"Left diagonal sum is = "<<leftdiasum<<endl;
	
//	ROW SUM
	for(int i = 0; i<row; i++){
		int rowsum = 0;
		for(int j = 0; j < col; j++){
			rowsum += arr[i][j];
		}
		cout<<"Row sum is = "<<rowsum<<endl;

	}
	
//	COLUMN SUM
	for(int j= 0; j<row; j++){
		int colsum = 0;
		for(int i = 0; i < col; i++){
			colsum += arr[i][j];
		}
		cout<<"Column sum is = "<<colsum<<endl;
		
	}
	
	
//	RIGHT DIAGONAL
	int rightdiasum = 0;
	for(int i = 0; i<row; i++){
		for(int j = 0; j < col; j++){
			if(i + j == row - 1){
				rightdiasum += arr[i][j];
			}
		}
	}
	cout<<"right diagonal sum is = "<<rightdiasum<<endl;
	
	
//	MAGIC SQUARE CHECK
//	if(leftdiasum == rightdiasum == rowsum == colsum){
//		cout<<"MAGIC SQUARE";
//	}
//	else{
//		cout<<"NOT A MAGIC SQUARE";
//	}
	
	
	return 0;
}
