// Find all the substrings of a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "a,b,c";
    int n = str.length();
    
    for (int i = 0; i < n; i++) {
        if (str[i] == ',') continue;  // Skip commas
        
        for (int j = i; j < n; j++) {
            if (str[j] == ',') continue;  // Skip commas
            
            cout << str.substr(i, j - i + 1) << endl;
        }
    }

    return 0;
}
