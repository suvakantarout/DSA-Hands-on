//display all the words of a string

// By creating empty string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string word = "";
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            if (!word.empty()) {
                cout << word << endl;
                word = "";
            }
        } else {
            word += s[i];
        }
    }

    return 0;
}




#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    vector<char> v;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);
    s += ' '; // Add an extra space at the end to process the last word

    for (int j = 0; j < s.length(); j++) {
        if (s[j] != ' ') {
            v.push_back(s[j]);
        } else {
            for (char c : v) {
                cout << c;
            }
            cout << endl;
            v.clear();
        }
    }

    return 0;
}
