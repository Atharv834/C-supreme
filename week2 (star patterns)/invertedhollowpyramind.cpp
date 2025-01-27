#include <iostream>
using namespace std;

void invertedhollowpyramid(int n)
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
               if( row==0 || row ==n-1 || col==0 || col==n-row-1){
                  cout << "* ";
            }

            else{
                cout<<"  ";
            }
        }
        cout << endl;
    }
}

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    invertedhollowpyramid(n);

    return 0;
}





/*logic is same that printing the first row and coloumn with star
R0 mei start hona chhiye and row= n-1 mei hona chahiye 
similarly C0 aur c=n-row-1 ko hona chahiye so apply confiton so done ! */

// * * * * * * * * * * 
//  *               * 
//   *             * 
//    *           * 
//     *         * 
//      *       * 
//       *     * 
//        *   * 
//         * * 
//          * 