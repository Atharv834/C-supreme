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
            cout << "* ";
        }
        cout << endl; // to move to the next line after a single row printed
    }

    return 0;
}

   //  Output of the question square triangular pyramid 

                            // * 
                            // * * 
                            // * * * 
                            // * * * * 
                            // * * * * * 
                            // * * * * * * 
                            // * * * * * * * 
                            // * * * * * * * * 
                            // * * * * * * * * * 
                            // * * * * * * * * * * 



//       Col 1  Col 2  Col 3  Col 4  Col 5  Col 6
// Row 1  *       
// Row 2  *       *       
// Row 3  *       *       *   
// Row 4  *       *       *       *   
// Row 5  *       *       *       *       *      
// Row 6  *       *       *       *       *       *