#include<iostream>
using namespace std;

void WavePrint(int a[][3], int size) {
    for (int j = 0; j < size; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < size; i++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int i = size - 1; i >= 0; i--) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    const int size = 3;
    int a[size][size];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Array elements are: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Wave print: " << endl;
    WavePrint(a, size);

    return 0;
}

