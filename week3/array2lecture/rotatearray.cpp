#include <iostream>
using namespace std;

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shiftArray(int arr[], int size, int shift) {
    int finalshift = shift % size;

    if (finalshift == 0) {
        printarray(arr, size); // No shift needed, just print the array
        return;
    }

    int temp[finalshift];
    int index = 0;

    // Copying the final shift elements into the temp array
    for (int i = size - finalshift; i < size; i++) {
        temp[index] = arr[i];
        index++;
    }

    // Shifting elements in the original array
    for (int i = size - 1; i >= finalshift; i--) {
        arr[i] = arr[i - finalshift];
    }

    // Putting back the elements from the temp array
    for (int i = 0; i < finalshift; i++) {
        arr[i] = temp[i];
    }

    printarray(arr, size);
}

int main() {
    int size;
    cout << "Enter the size of the array! :";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array! :";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int shift;
    cout << "Enter the number of positions to shift: ";
    cin >> shift;

    shiftArray(arr, size, shift);
    return 0;
}
