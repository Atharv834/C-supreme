#include <iostream>
using namespace std;

void fullpyramid(int n)
{
    int row, col;
    for (row = 0; row < n; row++)
    {
        // PART 1
        for ( col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        // PART 2
        for (col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }

        // PART 3
        for (col = 0; col < n - row;col++)
        {
            cout << "*";
        }
        cout<<endl;

    }

for ( row=0;row<n;row++){

       //below part 

         for ( col = 0; col < 1+ row; col++)
        {
            cout << "*";
        }

        // PART 2
        for (col = 0; col < 2*(n-row-1)+1; col++)
        {
            cout << " ";
        }

        // PART 3
        for (col = 0; col < 1+ row;col++)
        {
            cout << "*";
        }
        cout << endl;
}
}

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    fullpyramid(n);

    return 0;
}




/*

breaking into parts PART 1 PART2 PART 3  ........ 
WRITG EACH EQAUTION INDIVIDUALLY 

********** **********
*********   *********
********     ********
*******       *******
******         ******
*****           *****
****             ****
***               ***
**                 **
*                   *
*                   *
**                 **
***               ***
****             ****
*****           *****
******         ******
*******       *******
********     ********
*********   *********
********** **********













*/