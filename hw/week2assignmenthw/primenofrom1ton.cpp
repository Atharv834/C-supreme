#include <iostream>
using namespace std;

// same prime no logic
int primeno(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        bool isPrime = primeno(i);
        if (isPrime)
        {
            cout << i << endl;
        }
    }

    return 0;
}