#include<iostream>
using namespace std;

int Colsum(int arr[][2],int row,int col){
	
	for(int j = 0; j<col; j++){
		int colsum = 0;
		for(int i = 0; i<row; i++){
			colsum += arr[i][j];
		}
		cout<<colsum<<endl;
	} 

}

void Rowsum(int arr[][2],int row,int col){
	for(int i = 0; i<row; i++){
		int rowsum = 0;
		for(int j = 0; j<col; j++){
			rowsum += arr[i][j];
		}
		cout<<rowsum<<endl;
	} 
}


int main(){	
	int arr[2][2] ={{1,2},{3,4}};
	int row  = 2;
	int col = 2;

	cout<<"All the row sum indivisually are: "<<endl;
	Rowsum(arr,2,2);
	cout<<"All the column sum indivisually are: "<<endl;
	Colsum(arr,2,2);

	
	return 0;
}
