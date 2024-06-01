#include <iostream>
#include <vector>
using namespace std;

int target2dSearch(vector<vector<int>>& arr, int target) {
    // yeh ensure karna ki hamesha array 2d wala bhi sorted hona chahite means 
    // either in asc or either in desc order

    int s = 0;
    int r = arr.size();         // row calculate karne
    int c = arr[0].size();      // columns calculate karne
    int e = (r * c) - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        int rowIndex = mid / c;    // yeh yaad rakhna kaise rowIndex calculate karte
        int colIndex = mid % c;

        // baki logic toh same hi hai
        if (arr[rowIndex][colIndex] == target) {
            return mid;
        } else if (arr[rowIndex][colIndex] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main() {
    vector<vector<int>> arr{{10, 20, 30}, {40, 50, 70}, {90, 100, 120}};
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int ans = target2dSearch(arr, target);
    if (ans != -1) {
        int rows = arr.size();
        int cols = arr[0].size();
        int rowIndex = ans / cols;
        int colIndex = ans % cols;
        cout << target << " found at (" << rowIndex << "," << colIndex << ")" << endl;
    } else {
        cout << target << " not found" << endl;
    }
}  


// HAS THE TIME complexity  of O(log(r*c));   
// yeh complexity hoga toh moslty binary seacah hi use hoga always 