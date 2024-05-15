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
            if( row==0  || col==0 || col==row){
                  cout << "* ";
            }

            else{
                cout<<"  ";
            }        }

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
               if( row ==n-1 || col==0 || col==n-row-1){
                  cout << "* ";
            }

            else{
                cout<<"  ";
            }
        }
        cout << endl;
    }
}

void hollowdiamondpy(int n)
{
    fullpyramid(n);
    invertedpyramid(n);
}

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    hollowdiamondpy(n);

    return 0;
}



/*

logic remains the same but just modidying the conditons of the iuverted and the 
just for the upper pyramind we dont have to print the inside last row all stars so removed
the condition of row == n-1 

and in the inverted one we dont want the first to print all between stars so removed 
condtion of row ==0 


    
    
         * 
        * *                     
       *   * 
      *     * 
     *       * 
    *         * 
   *           * 
  *             * 
 *               *          originally only of editing condtions 
* * * * * * * * * *     -> 
* * * * * * * * * * 
 *               * 
  *             * 
   *           * 
    *         * 
     *       * 
      *     * 
       *   * 
        * * 
         * 


         *
        * *
       *   *
      *     * 
     *       *
    *         *
   *           *                removed the row== n 
  *             * 
 *               *
*                 *
* * * * * * * * * *
 *               *
  *             *
   *           *
    *         * 
     *       *
      *     *
       *   * 
        * *
         *

         * 
        * * 
       *   * 
      *     *           removed condition row==0
     *       * 
    *         * 
   *           * 
  *             * 
 *               * 
*                 * 
*                 * 
 *               * 
  *             * 
   *           * 
    *         * 
     *       * 
      *     * 
       *   * 
        * * 
         * 
*/