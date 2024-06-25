#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void minElement(vector<int>& arr, int index, int& mini) {
    if (index == arr.size()) return;
    mini = min(mini, arr[index]);
    minElement(arr, index + 1, mini);
}

int main() {
    vector<int> arr{10, 20, 30, 40, 50, 60};
    int index = 0;
    int mini = INT_MAX;

    minElement(arr, index, mini);

    cout << "The minimum element in the array is: " << mini << endl;

    return 0;
}
