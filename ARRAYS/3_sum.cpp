#include<iostream>
using namespace std;

void ThreeSum(int a[], int size, int ans[]) {
    int target = 5;
    for (int i = 0; i < size - 2; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            for (int k = j + 1; k < size; k++) {
                if (a[i] + a[j] + a[k] == target) {
                    ans[0] = a[i];
                    ans[1] = a[j];
                    ans[2] = a[k];
                    return;
                }
            }
        }
    }
}

int main() {
    int a[] = {2, 1, 2, 1, 2};
    int size = 5;
    int ans[3]; // Declare ans as an array
    ThreeSum(a, size, ans);
    cout << "Triplet: " << ans[0] << ", " << ans[1] << ", " << ans[2] << endl;
    return 0;
}

