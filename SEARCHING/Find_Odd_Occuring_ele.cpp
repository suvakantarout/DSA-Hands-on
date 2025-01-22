#include<iostream>
using namespace std;

int FindOddOccuringElement(int a[], int size){
	int s = 0; 
	int e = size -1;
	while(s<= e){
		int mid = s + (e - s)/2;
		
//		single element
		if(s == e){
			return s;
		}
		
//		even
		if(a[mid % 2] == 0){
			if(a[mid] == a[mid + 1]){
//				move right
				s = mid + 1;
			}
			else{
//				move left
				e = mid - 1;
			}
		}
//		odd
		if(a[mid % 2] != 0){
			if(a[mid] == a[mid -1]){
//				move right
				s = mid + 1;
			}
			else{
//				move left
				e = mid -1;
			}
		}
		
		//Mid lies on the answer
		if(a[mid] != a[mid -1] && a[mid] != a[mid +1]){
			return mid;    
		}
	}
	

	return -1;
}

int main(){
	int a[] = {1,2,2,3,3};
	int size = 5;
	
	int ans = FindOddOccuringElement(a,size);
	cout<<"Odd occuring element is: "<<a[ans]<<endl;  
	cout<<"Present in index: "<<ans<<endl;        
	
	return 0;
}
