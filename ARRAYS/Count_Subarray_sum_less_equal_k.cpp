// Count the number of subarray with sum < k .

#include<iostream>
using namespace std;

int subarray(int arr[], int size, int k){
    
    int count = 0;
    for(int i = 0; i<size; i++){
        int sum = 0;
        for(int j = i; j<size; j++){
            sum += arr[j];
            if(sum < k){
                count++;
            }
        }
    }
    return count;
}


int main(){
    int arr[] = {1,2,3};
    int size = 3;
    int k = 6;

    int ans = subarray(arr,size,k);
    cout<<"Number of subarray with sum < k are: "<<ans;

    return 0;
}