#include <iostream>
using namespace std;

void invertedpyramid(int n)
{
    int row, col;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < row; col++)
        {
            cout << " ";
        }

        for (col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    invertedpyramid(n);

    return 0;
}

/*
so n=4  logic R0 has 0 spaces and forms 4*
  R1 has 1 spaces and forms 3*
   R2 has 2 spaces and forms 2*
    R3 has 3 spaces and forms 1*
  spaces = row
  stars = n-row
   above logix goes !

  */

/*

Enter the no of rows and cols( square pyramid ) :10
* * * * * * * * * *
 * * * * * * * * *
  * * * * * * * *
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
*/