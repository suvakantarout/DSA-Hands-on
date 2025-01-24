//return Single or non-repeated digit count of a number.

#include <iostream>
using namespace std;

int countNonRepeatedDigits(int num) {
    int count[10] = {0}; // Initialize count array

    // Count occurrences of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int nonRepeatedCount = 0;
    
    for (int i = 0; i <= 9; i++) {
        if (count[i] == 1) {
            nonRepeatedCount++;
        }
    }

    return nonRepeatedCount;
}

int main() {
    int num = 10157;
    int count = countNonRepeatedDigits(num);

    cout << "Number of non-repeated digits in " << num << ": " << count << endl;

    return 0;
}


