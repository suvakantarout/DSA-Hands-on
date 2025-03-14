// Find the length of a character array ?

#include<iostream>
using namespace std;

int getLength(char str[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(str[i] != '\0'){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}


int main(){
    char str[100];
    int size = 100;

    cout<<"Enter the string: ";
    cin.getline(str,size); 

    cout<<"Input string is: "<<str<<endl;

    int ans = getLength(str, size);
    cout<<"Size of the string is: "<<ans;

    return 0;
}