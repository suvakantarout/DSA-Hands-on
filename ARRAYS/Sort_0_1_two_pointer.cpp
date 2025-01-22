//Sort 0's and 1's
#include<iostream>
using namespace std;

void SortOnesZeros(int a[], int size) {
    int p = 0;  //pointer
    for (int i = 0; i < size; i++) {    //i is also a pointer
        if (a[i] == 0) {
            int temp = a[p];
            a[p] = a[i];
            a[i] = temp;
            p++;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int a[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    SortOnesZeros(a, size);
    cout << "Final array is: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}


