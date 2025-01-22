//Binary search STL

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int a[] = {10,20,30,40,50,60,70};
	int size = 7;
	int target = 50;
	int ans = binary_search(a,a+size,target);
	cout<< ans <<endl;
	return 0;
}

