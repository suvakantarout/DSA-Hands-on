#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int k,int n){

    int sum  = 0;
    for(int i = 0; i<k; i++){
        sum += arr[i];
    }

    int maxsum = sum;

    int i = 0; 
    int j = k - 1;
    while(j < n - 1){
        sum -= arr[i];
        i++;
        j++;
        sum += arr[j];
        if(sum > maxsum){
            maxsum = sum;
        }
    }
    return maxsum;

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 3;
    int ans  = maxSubarraySum(arr,k,n);
    cout<<"max subarray sum is: "<<ans;

    return 0;
}