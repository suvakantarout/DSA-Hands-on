
#include<iostream>
#include<cstring>   //For str length
using namespace std;

bool Reverse(char str[], int size){
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    while(i < j){
        if(str[i] == str[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int size = 100;
    char str[size];
    cout<<"Enter a string to convert: ";
    cin.getline(str,size);

    ;
    // cout<<"Reversed string is: "<<str<<endl;

    if(Reverse(str, size) == true){
        cout<<"PALENDROME";
    }
    else{
        cout<<"NOT PALEDROME";
    }

    return 0;
}