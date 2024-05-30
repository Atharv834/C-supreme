#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> arr{10, 20, 30, 40, 50, 1};

    int it = binary_search(arr.begin(), arr.end(), 40); // Binary search: found to 1 otherwise 0
    cout << it << endl;

    auto it1 = lower_bound(arr.begin(), arr.end(), 32); // 32 se next badi value milegi array se >= ho sakta
    cout << *it1 << endl;

    auto it2 = upper_bound(arr.begin(), arr.end(), 40); // 40 se next badi value milegi array se always > wale hi
    cout << *it2 << endl;

    auto it3 = min_element(arr.begin(), arr.end()); // Minimum element particular range mein
    cout << *it3 << endl;

    auto it4 = max_element(arr.begin(), arr.end()); // Maximum element particular range mein
    cout << *it4 << endl;

    return 0;
}
