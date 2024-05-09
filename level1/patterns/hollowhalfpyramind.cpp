#include <iostream>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == 1 || row == n - 1 || row == col)
            {
                cout << "* ";
            }
            else
            {

                if (col == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl; // to move to the next line after a single row printed
    }

    return 0;
}

                            // * 
                            // * * 
                            // *   * 
                            // *     * 
                            // *       * 
                            // *         * 
                            // *           * 
                            // *             * 
                            // *               * 
                            // * * * * * * * * * * 