// Count the word of a string

#include<iostream>
#include<string>
using namespace std;

int WordCount(string s, int len){
    int count = 1;
    for(auto it : s){
        if(it == ' '){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);

    int len = s.length();

    int ans = WordCount(s,len);
    cout<<"Number of words are: "<<ans;

    return 0;
}