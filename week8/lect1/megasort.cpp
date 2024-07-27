#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int s, int e, int mid) {
    int leftLength = mid - s + 1;    // left wala array
    int rightLength = e - mid;       // right wala array

    int* leftArr = new int[leftLength];
    int* rightArr = new int[rightLength];

    int index = s;
    for (int i = 0; i < leftLength; i++) {    // copying the elements from array to leftArr
        leftArr[i] = arr[index];
        index++;
    }

    index = mid + 1;
    for (int j = 0; j < rightLength; j++) {   // copying the elements from array to rightArr
        rightArr[j] = arr[index];
        index++;
    }

    // MERGE LOGIC
    int i = 0;
    int j = 0;
    int mainArrayIndex = s;

    while (i < leftLength && j < rightLength) {
        if (leftArr[i] < rightArr[j]) {
            arr[mainArrayIndex] = leftArr[i];
            i++;
            mainArrayIndex++;
        } else {
            arr[mainArrayIndex] = rightArr[j];
            j++;
            mainArrayIndex++;
        }
    }

    while (i < leftLength) {
        arr[mainArrayIndex] = leftArr[i];
        i++;
        mainArrayIndex++;
    }

    while (j < rightLength) {
        arr[mainArrayIndex] = rightArr[j];
        j++;
        mainArrayIndex++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(vector<int>& arr, int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main() {
    vector<int> arr = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = arr.size();
    int s = 0;
    int e = size - 1;

    cout << "Before: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, s, e);

    // printing entire array
    cout << "After: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
