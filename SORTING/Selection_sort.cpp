#include<iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        
        // Find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-6, 8, 23, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size dynamically

    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
}


