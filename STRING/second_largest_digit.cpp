// input => suv12132rout
// output => 2
// input => suv11111
// output => -1

#include<iostream>
#include<string>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    unordered_set<char>st;
    vector<int>vv;
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int len = s.length();
    for(int i = 0; i<len; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.insert(s[i]);
        }
    }
    for(auto it : st){
        // int ch = stoi(it);  it is not possible because it is a character not a string.
        vv.push_back(it - '0'); // if => it = '5', then '5' = '0' = 5
    }    
    sort(st.begin(),st.end());

    if(vv.size() <= 1){
        cout<<"-1"<<endl;
    }
    else{
        int ans = vv[vv.size() - 2];
        cout<<"Second largest digit is: "<<ans<<endl;
    }
    return 0;
}