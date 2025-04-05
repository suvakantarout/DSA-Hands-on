// display the frequency of each words of a string

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>mpp;
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int len = s.length();

    string word = "";
    for (int i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            if (word.length() != 0) {
                mpp[word]++;
                word = "";
            }
        } 
        else {
            word += s[i];
        }
    }

    for(auto it : mpp){
        cout<<it.first << ":" <<it.second <<endl;
    }

    return 0;
}
