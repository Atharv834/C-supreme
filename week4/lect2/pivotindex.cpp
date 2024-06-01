#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

int pivotIndex(vector<int> &arr){
    int size = arr.size();
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
         if (mid <= size - 1 && arr[mid] > arr[mid + 1]){
            return mid;
        }
        if (mid >= 0 && arr[mid] < arr[mid - 1]){
            return mid - 1;
        }
        if (arr[mid] < arr[s]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
       
        mid = s + (e - s) / 2;
    }

    return -1;
}

void searchElement(vector<int>& arr, int target) {
    int index = pivotIndex(arr);
    int left_result = binarySearch(arr, 0, index, target);
    int right_result = binarySearch(arr, index + 1, arr.size() - 1, target);

    cout<<"Pivot index is at :"<<index<<endl;

    if (left_result != -1) {
        cout << "Element found at index " << left_result << endl;
    } else if (right_result != -1) {
        cout << "Element found at index " << right_result << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

int main() {
    vector<int> arr{50, 60, 70, 80, 10, 20, 30, 40, 45};
    searchElement(arr, 30);
    return 0;
}
