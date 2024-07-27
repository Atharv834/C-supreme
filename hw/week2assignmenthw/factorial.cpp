#include <iostream>
using namespace std;

int fact(long long int n)
{
    long long int fact = 1;
    if (n == 0 || n == 1)
    {
        fact == 1;
    }
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    cout << "Factorial of function is " << fact(n);

    return 0;
}

/* long long int is used here as big vlues cannot be stored in int 
var stores only 4 bytes of value so it is */ 