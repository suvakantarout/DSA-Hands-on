#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int SingleNumber(vector<int> &v) {
    // Create frequency table
    unordered_map<int, int> freqMap;

    // Add frequency to the map/table
    for(int i = 0; i < v.size(); i++) {
        int num = v[i];
        freqMap[num] = freqMap[num] + 1;
        // frequency[num]++;
    }

    // Find single number
    int ans;
    for(it = freqMap.begin(); it != freqMap.end(); it++) {
        int key = it->first;
        int freq = it->second;
        // cout << key << ":" << freq << endl;
        if(freq == 1) {
            ans = key;2
        }
    }
    return ans;
}

int main() {
    vector<int> v = {4, 1, 2, 1, 2};
    int ans = SingleNumber(v);
    cout << "\nSingle number is: " << ans << endl;
    return 0;
}

