#include <iostream>
using namespace std;

/* finding the element int the 2d array */
void findingElement(int arr[][4], int target, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                cout << "Found at (" << i << "," << j << ") : " << arr[i][j] << endl;
                return; 
            }
        }
    }
    cout << "Element not found in the array." << endl; 
    }

int main() {
    int arr[3][4] = {
        {10, 20, 30, 70},
        {40, 50, 60, 90},
        {100, 120, 452, 47}
    };

    findingElement(arr, 47, 3, 4); // 3 rows, 4 columns

    return 0;
}
