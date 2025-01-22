//Find last occurence of x in an array
#include<iostream>
#include<vector>
using namespace std;

int LastOccurence(const vector<int>& v, int x) {
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> v(5);
    cout << "Enter vector elements: " << endl;
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int occurrence = LastOccurence(v, x);
    if (occurrence != -1) {
        cout << "Last occurrence: " << occurrence << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}


