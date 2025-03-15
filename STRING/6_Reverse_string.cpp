
#include<iostream>
#include<cstring>   //For str length
using namespace std;

void Reverse(char str[], int size){
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    while(i < j){
        int temp = str[i]; 
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int size = 100;
    char str[size];
    cout<<"Enter a string to convert: ";
    cin.getline(str,size);

    Reverse(str, size);
    cout<<"Reversed string is: "<<str;

    return 0;
}