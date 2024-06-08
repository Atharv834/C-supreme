#include <iostream>
#include <cmath>
using namespace std;

int DecimaltoBinary(int n)
{

    if (n <= 0)
    {
        cout << "you can calculate binary form of a negaitve number !\n";
        return -1;
    }

    int binaryno = 0, i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = (bit * pow(10, i)) + binaryno;
        i++;
        n = n / 2;
    }
    return binaryno;
}

int main()
{

    int n;
    cout << "Enter the number to convert to binary" << endl;
    cin >> n;

    if (cin.fail())
    {
        cout << "Enter a valid number!\n";
        return 1; // Exit with an error code
    }

    int binary = DecimaltoBinary(n);
    if (binary != -1)
    {
        cout << "Binary representation: " << binary << endl;
    }
    return 0;
}