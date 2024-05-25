#include <iostream>
using namespace std;

int primeno(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << n << " " << "is prime no";
    }
    else
    {
        cout << n << " " << "is not a prime no";
    }
}

int main()
{

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    primeno(n);

    return 0;
}