#include <iostream>
using namespace std;

void fullpyramid(int n)
{
    int row, col;
    for (row = 0; row < n; row++)
    {

        for (col = 0; col < n - row - 1; col++)
        {
            cout << " "; // for printing the spaces
        }

        for (col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

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

void diamondpy(int n)
{
    fullpyramid(n);
    invertedpyramid(n);
}

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    diamondpy(n);

    return 0;
}


/*logic is just combine the fulll and inverted pyramind into a fucntion to make it 

         * 
        * * 
       * * * 
      * * * * 
     * * * * * 
    * * * * * * 
   * * * * * * * 
  * * * * * * * * 
 * * * * * * * * * 
* * * * * * * * * * 
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