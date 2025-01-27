#include <iostream>
using namespace std;

int main() {
    int a = 10;   
    int* ptr = &a; // Declare a pointer to an integer and initialize it with the address of 'a'

    cout << "Value of a: " << a << endl;         // Outputs: Value of a: 10
    cout << "Address of a: " << &a << endl;      // Outputs: Address of a: <address>
    cout << "Value of ptr: " << ptr << endl;     // Outputs: Value of ptr (address of 'a'): <address>
    cout << "Value pointed to by ptr: " << *ptr << endl; // Outputs: Value pointed to by ptr: 10

    int arr[4] = {10, 20, 30, 40};
    int* p1 = arr; // Declare a pointer to an integer and initialize it with the address of the first element of the array
     cout << "Address of the first element of arr: " << arr << endl; 
    cout << "Address of p1: " << p1 << endl; 
    cout << "Value of the second element of arr: " << *(arr + 1) << endl;

    char ch[5] = {'a', 'b', 'c', 'd'};
    cout << "Printing the character array : " << ch << endl;
    cout << "1st address of the char array :" << &ch << endl;
    char *p = ch;
    cout << p << endl;  // printing full char array
    cout <<"FIrst element of char array : "<< *p << endl; // prints the first element of the char array

    return 0;
}
