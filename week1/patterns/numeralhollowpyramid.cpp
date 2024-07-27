#include <iostream>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n-row; col++)
        {
            if (row == 0 || row == n-2 || row == n - 1 || row + col == (n-1) || col == 0 )
            {
                cout << col+1<<" ";
            }
            else
            {

                    cout << "  ";
                }
            }
             cout << endl; // to move to the next line after a single row printed
        }
       


    return 0;
}



                // 1 2 3 4 5 6 7 8 9 10 
                // 1               9 
                // 1             8 
                // 1           7 
                // 1         6 
                // 1       5
                // 1     4 
                // 1   3
                // 1 2
                // 1