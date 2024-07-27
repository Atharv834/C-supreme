#include <iostream>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row; col++)
        {
            // by noticing we get to know that col+row<n
            cout << "* ";
        }
        cout << endl; // to move to the next line after a single row printed
    }

    return 0;
}

        // Below is the pattern printed for above one 
                    // * * * * * * * * * * 
                    // * * * * * * * * * 
                    // * * * * * * * * 
                    // * * * * * * * 
                    // * * * * * * 
                    // * * * * * 
                    // * * * * 
                    // * * * 
                    // * * 
                    // * 