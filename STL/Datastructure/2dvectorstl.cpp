#include <iostream>
#include <vector>
using namespace std;

int main() {

    
    vector<vector<int>> arr(4);
    arr[0] = vector<int>(4, 0);
    arr[1] = vector<int>(2, 0);
    arr[2] = vector<int>(5, 0);
    arr[3] = vector<int>(1, 0);

    for (const auto& row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
