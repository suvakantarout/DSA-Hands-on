// sum of digits of a number string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "454";
    int len = s.length();
    int sum = 0;
    for(int i = 0; i<len; i++){
        int digit = s[i] - '0';   // Convert char to int
        sum += digit;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}

