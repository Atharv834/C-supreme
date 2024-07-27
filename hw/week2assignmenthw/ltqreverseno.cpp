#include <iostream>
using namespace std;

int reverseNO(int n)
{
    int ans = 0, rem = 0;

    bool isneg = false;
    if (n < 0)
    {
        isneg = true;
        n = -n;
    }

    while (n > 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    return isneg ? -ans :ans ;
}

int main()
{

    int n;
    cout << "Enter the value of n :";
    cin >> n;


  cout << "Reversed number is: " << reverseNO(n) << endl;

}