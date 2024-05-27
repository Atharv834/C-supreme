#include <iostream>
using namespace std;


int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
 
   }

cout << "Array reversed will be : ";
    for (int j = size-1; j >=0; j--) {
        cout<< arr[j]<<" ";
 
   }


   return 0;

}