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
            cout << col+1<<" ";
        }
        cout << endl; // to move to the next line after a single row printed
    }

    return 0;
}


                    // 1 
                    // 1 2 
                    // 1 2 3 
                    // 1 2 3 4 
                    // 1 2 3 4 5 
                    // 1 2 3 4 5 6 
                    // 1 2 3 4 5 6 7 
                    // 1 2 3 4 5 6 7 8 
                    // 1 2 3 4 5 6 7 8 9 
                    // 1 2 3 4 5 6 7 8 9 10 