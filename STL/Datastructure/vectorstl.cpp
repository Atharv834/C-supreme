#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // Insert the element at any position
    arr.insert(arr.begin() + 2, 70);

    // Print the elements of the vector
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Accessing elements
    cout << *(arr.begin()) << endl; // prints the element at the first position
    cout << arr.front() << endl;    // prints the first element in the vector
    cout << arr.back() << endl;     // prints the last element in the vector
    cout << arr.empty() << endl;    // checks if the vector is empty

    // Swapping two vectors
    vector<int> first{10, 20, 30, 40, 50};
    vector<int> second{100, 300, 500};

    first.swap(second);

    // Print elements of the first vector after swapping
    for (int i = 0; i < first.size(); i++) {
        cout << first[i] << " ";
    }
    cout << endl;

    // Print elements of the second vector after swapping
    for (int i = 0; i < second.size(); i++) {
        cout << second[i] << " ";
    }
    cout << endl;

    // For-each loop to print elements of arr
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Creating an iterator
    vector<int>::iterator it = arr.begin(); // creating and initializing with the first element

    // Using the iterator to print elements of arr
    while (it != arr.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}
