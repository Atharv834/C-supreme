#include <iostream>
using namespace std;

int main() {
    // Integer create karta hu using stack memory
    int a = 5;
    cout << a << endl;

    // Using the heap memory
    int *ptr = new int;
    *ptr = 60;
    cout << *ptr << endl;

    delete ptr;  // ptr ko deallocate karne mei use hota hai









    // FOR ARRAY

    // Using the stack
    int arr[50] = {0};
    cout << arr[0] << " " << arr[2] << endl;

    // Using the heap memory
    int *brr = new int[50];
    *brr = 2;  // Corrected initialization for heap array
    cout << brr[0] << " " << brr[20] << endl;

    delete[] brr;  // Heap memory deallocate karne ke liye
}

