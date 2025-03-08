// LC - 303

#include<iostream>
#include<vector>
using namespace std;

// int PrefixSufixSum(vector<int> v){
//     int totalsum = 0;
//     for(int i = 0; i<v.size(); i++){
//         totalsum += v[i];
//     }

//     int prefixSum = 0;
//     for(int i = 0; i<v.size(); i++){
//         prefixSum += v[i];

//         int sufixSum = totalsum - prefixSum;

//         if(prefixSum == sufixSum){
//             return true;
//         }
//     }
//     return false;
// }


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

    int l = 2;
    int r = 5;
    int sum = 0;
    for(int i = v[l-1]; i<v[r]; i++){
        sum += v[i];
    }
    cout<<"Ans is: "<<sum;

    return 0;
}