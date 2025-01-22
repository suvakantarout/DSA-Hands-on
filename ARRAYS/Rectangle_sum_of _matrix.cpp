//RECTANGLE SUM OF A MATRIX
//Brute Force
#include<iostream>
#include<vector>
using namespace std;
int rectanglesum(vector<vector<int> >v ,int l1,int r1, int l2, int r2){
	int sum  = 0;
	for(int i = l1; i<=l2; i++){
		for(int j = r1; j <=r2; j++){
			sum = sum + v[i][j];
		}
	}
	return sum;
}

int main(){
	int a,b;
	cout<<"Enter matrix size: ";
	cin>>a>>b;
	cout<<endl;
	cout<<"Enter matrix elements: ";
	vector<vector<int> >v(a, vector<int>(b));
	for(int i = 0; i<a; i++){
		for(int j =0; j<b; j++){
			cin>>v[i][j];
		}
	}
	
	for(int i = 0; i<a; i++){
		cout<<"\n";
		for(int j = 0; j<b; j++){
			cout<<v[i][j]<<" ";
		}
	}
	
	cout<<endl<<endl;
	int l1,r1,l2,r2;
	cout<<"Enter l1,r1,l2,r2"<<endl;
	cin>>l1>>r1>>l2>>r2;
	
	int Ans = rectanglesum(v,l1,r1,l2,r2);
	cout<<"Rectangle sum of given matrix is: "<<Ans;
	
	return 0;
}
