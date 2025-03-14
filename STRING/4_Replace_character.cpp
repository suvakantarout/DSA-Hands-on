
// Replace the character in a string.

// ex: My@name@is@Suv => input
    //    My name is Suv => output

    #include<iostream>
    using namespace std;

    void replacecharacter(char str[], char prevChar, char newChar){
        for(int i = 0; str[i]!='\0'; i++){
            if(str[i] == prevChar){
                str[i] = newChar;
            }
        }
    }

    int main(){
        char str[100];

        cout<<"Enter the string: "<<endl;
        cin.getline(str,100);

        replacecharacter(str,'@',' ');
        cout<<"Replaced string is: "<<str;

        return 0;
    }