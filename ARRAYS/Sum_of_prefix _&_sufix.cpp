// if the prefix and suffix sum of an array is equal then return true else return false ?

#include<iostream>
#include<vector>
using namespace std;

int PrefixSufixSum(vector<int> v){
    int totalsum = 0;
    for(int i = 0; i<v.size(); i++){
        totalsum += v[i];
    }

    int prefixSum = 0;
    for(int i = 0; i<v.size(); i++){
        prefixSum += v[i];

        int sufixSum = totalsum - prefixSum;

        if(prefixSum == sufixSum){
            return true;
        }
    }
    return false;
}


int main(){
    int size;
    cout<<"Enter vector size: ";
    cin>>size;
    vector<int> v(size);
    for(int i = 0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int ans = PrefixSufixSum(v);
    if(ans == true){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }

    return 0;
}