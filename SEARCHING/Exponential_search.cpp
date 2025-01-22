//EXPONENTIAL SEARCH

#include<iostream>
using namespace std;

int binarySearch(int a[], int s, int e, int target){
    while(s <= e){
    	int mid = s + (e - s) / 2;
        if(a[mid] == target){
            return mid;
        } 
        else if(a[mid] < target){
            s = mid + 1;
        } 
        else{
            e = mid - 1;
        }
        
    }
    return -1;
}

int exponentialSearch(int a[], int size, int target){
    if(a[0] == target){
        return a[0];
    }
    int i = 1;
    while(i < size && a[i] <= target){
        i = i * 2;
    }
    return binarySearch(a, i/2, min(i, size-1), target);
}

int main(){
    int a[] = {3,4,5,6,11,13,15,54,56,70};
    int size = 10;
    int target = 13;
    
    int ans = exponentialSearch(a, size, target);
    if(ans != -1)
        cout<<"Target found in index: "<<ans;
    else
        cout<<"Target not found";
        
        
    return 0;
}

