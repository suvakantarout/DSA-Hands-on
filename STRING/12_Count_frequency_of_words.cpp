// Count the frequency of the words in a string

#include <iostream>
#include <unordered_map>
#include <map>
#include <sstream>

using namespace std;

int main() {
    unordered_map<string, int> wordCount;
    string sentence, word;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    while (ss >> word) {
        wordCount[word]++;
    }

    // map<string, int> sortedWordCount(wordCount.begin(), wordCount.end());

    cout << "Word frequencies:\n";
    for (auto & it : wordCount) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
