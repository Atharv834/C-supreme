#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr, int s, int e) {
    int i = s + 1;
    int j = e;
    int pivot = arr[s];  //first element is pivot 

    while (i <= j) {   //jab tak i j se chota ho tab tak karo
        while (i <= e && arr[i] <= pivot) i++;   // arr[i] bada honaa chaiye pivot se
        while (j >= s && arr[j] > pivot) j--;   //arr[j] cbhota hona chaiye tab tak 
        
        if (i < j) {
            swap(arr[i], arr[j]);   // i aur j wale ele ko swap kardo
        }
    }
    swap(arr[s], arr[j]);  //loop kr bahar matlab j>i so swap pivot and j 
    return j;
}

void quickSort(vector<int>& arr, int s, int e) {
    if (s < e) {
        int p = partition(arr, s, e);   //index return karega toh 2 parts mei divide hoga 
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
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

    quickSort(arr, s, e);

    cout << "After: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
