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
                cout << "* ";
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

    //logic 

    //  row + col == (n-1) for the cross diagonal 
    //  2nd last and last row with all stars printed  and col ==0 all star printed and rest logic of 
    //  inverted half pyramid  




            // Output 

            // * * * * * * * * * * 
            // *               * 
            // *             * 
            // *           * 
            // *         * 
            // *       * 
            // *     * 
            // *   * 
            // * * 
            // * 