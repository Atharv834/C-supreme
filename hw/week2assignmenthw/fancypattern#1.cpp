#include <iostream>
using namespace std;

int main()
{

    int n, col, row;
    cout << "Enter the number of rows for the fancy pyramid: ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        for (col = n-row; col < row + 1; col++)
        {
           cout<<col+1<<"*";
        }
        for (col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}