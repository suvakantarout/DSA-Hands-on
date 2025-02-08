#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the size of the array

    // Declare the array dynamically for better safety
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    // Find the maximum value in the array to size the hash array correctly
    int maxValue = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    // Dynamically size the hash array based on the max value
    int hash[maxValue + 1] = {0}; 
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1; // Count the frequency of each element
    }

    int q;
    cin >> q; // Input the number of queries
    while (q--) {
        int num;
        cin >> num;
        if (num <= maxValue) {
            cout << hash[num] << endl; // Output the frequency of the queried number
        } else {
            cout << 0 << endl; // If the number is out of bounds, output 0
        }
    }

    return 0;
}

