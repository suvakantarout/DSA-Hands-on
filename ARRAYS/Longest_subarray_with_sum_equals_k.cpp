// Return the subarray with sum == k.

#include<iostream>
#include<vector>
using namespace std;

vector<int> subarray(int arr[], int size, int k){
    vector<int>v;
    int count = 0;
    for(int i = 0; i<size; i++){
        int sum = 0;
        for(int j = i; j<size; j++){
            sum += arr[j];
            if(sum == k){
                v.push_back(arr[j]);
            }
        }
    }
    return v;
}

int main(){

    int arr[] = {1,2,3,4};
    int size = 4;
    int k = 10;

    vector<int> ans = subarray(arr,size,k);
    cout<<"Longest subarray with sum <= k is: "<<endl;
    for(int i: ans){
        cout<<i<<" ";
    }
    return 0;
}