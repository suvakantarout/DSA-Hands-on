#include<iostream>
using namespace std;

int main(){
    // string creation
    char str[100];

    // string input
    cout<<"Enter your name: "<<endl;
    // cin>>str;
    cin.getline(str,5);


    // print the string
    cout<<"Your name is: "<<str<<endl;
    cout<<str[0] <<"-> " <<(int)str[0] <<endl;
    cout<<str[1] <<"-> " <<(int)str[1] <<endl;
    cout<<str[2] <<"-> " <<(int)str[2] <<endl;
    cout<<str[3] <<"-> " <<(int)str[3] <<endl;
    cout<<str[4] <<"->  " <<(int)str[4] <<endl;  //Null character

    
    cout<<"Enter another string: ";
    cin.getline(str, 100, '.');  //(string name, size, delimeter)
    // Input will stop the delimeter found 
    cout<< endl << str <<endl;


    return 0;
}