//Shift or Rotate an array.

#include<iostream>
using namespace std;

void RotateArray(int a[], int size,int shift){
	if(shift > size){
		shift = shift % size;
	}
	int temp[100];
	int index = 0;
	for(int i  = size - shift; i<size; i++){
		temp[index] = a[i];
		index++;
	}
	
	for(int i = size - 1; i>=0; i--){
		a[i] = a[i - shift];
	}
	
	for(int i= 0; i<shift; i++){
		a[i] = temp[i];
	}
	
	if(shift == 0){
		return; //Do Nothing
	}
}

int main(){
    int a[100], size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>a[i];
    }
    int shift = 2;
    RotateArray(a, size,shift);
    cout<<"Rotated array is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}









//Using Reverse method

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//void RotateArray(int a[], int size,int place){
//
//	int l = 0;
//    int r = size - 1;
//    int temp;
//    while(l < r){
//        temp = a[l];
//        a[l] = a[r];
//        a[r] = temp;
//        l++;
//        r--;
//    }
//    
//    reverse(a, a + place);
//    reverse(a + place, a + size);
//}
//
//int main(){
//    int a[100], size;
//    cout<<"Enter the size of an array: ";
//    cin>>size;
//    cout<<"Enter array elements: "<<endl;
//    for(int i = 0; i < size; i++){
//        cin>>a[i];
//    }
//    int place = 10;
//    RotateArray(a, size,place);
//    cout<<"Rotated array is: "<<endl;
//    for(int i = 0; i < size; i++){
//        cout<<a[i]<<" ";
//    }
//    return 0;
//}


