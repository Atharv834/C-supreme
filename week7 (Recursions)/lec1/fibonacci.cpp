#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n==1 ) return n;
     return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter Fibonacci number position: ";
    cin >> n;

    int ans1 = fibonacci(n);
    cout << "Fibonacci number at position " << n << " is: " << ans1 << endl;


    cout << "Fibonacci series up to " << n << " terms:" << endl;
    for (int i = 1; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
