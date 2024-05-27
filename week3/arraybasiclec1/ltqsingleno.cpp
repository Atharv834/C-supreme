#include <iostream>
using namespace std;

int findUniqueno(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int UniqueNumber = findUniqueno(arr, size);
    cout << "The single number is: " << UniqueNumber << endl;

    return 0;
}


/* XOR ^ cancels out the two number so it takes out tow same number */