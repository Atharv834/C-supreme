#include <iostream>
using namespace std;

void printNum(int n) {
    if (n == 0) return; // Base case to stop recursion
    cout << n << endl;
    printNum(n - 1); // Recursive call with n-1
}

int main() {
    int n;
    cout << "Enter the number to display up to: ";
    cin >> n;

    cout << "All numbers from " << n << " to 1 are:" << " ";
    printNum(n); // Call the recursive function to print numbers

    return 0;
}
