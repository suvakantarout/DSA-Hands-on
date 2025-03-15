#include<iostream>
using namespace std;

void ToUpper(char str[], int size){
    for(int i = 0; i<size; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = (int)str[i] - 32;
        }     
    }
}

void ToLower(char str[], int size){
    for(int i = 0; i<size; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = (int)str[i] + 32;
        }
    }
}


int main(){
    int size = 100;
    char str[size];
    cout<<"Enter a string to convert: ";
    cin.getline(str,size);

    ToUpper(str, size);
    cout<<"Upper case string is: "<<str<<endl;

    ToLower(str, size);
    cout<<"Lower case string is: "<<str;

    return 0;
}