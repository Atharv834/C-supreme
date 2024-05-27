#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

void minMax( vector<vector<int>>& arr, int rowsize, int colSize) {
    int mini = INT_MAX; 
    int maxi = INT_MIN; 

    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colSize; j++) {
            mini = min(arr[i][j], mini);
            maxi = max(arr[i][j], maxi);
        }
    }

    cout << "The minimum element is: " << mini << endl;
    cout << "The maximum element is: " << maxi << endl;
}

int main() {
    vector<vector<int>> arr(3, vector<int>(2, 0));
    int rowsize = arr.size();
    int colSize = arr[0].size();

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colSize; j++) {
            cin >> arr[i][j];
        }
    }

    minMax(arr, rowsize, colSize);

    return 0;
}
