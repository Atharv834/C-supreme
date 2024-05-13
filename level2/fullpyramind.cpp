#include <iostream>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;


    for (row =0;row<n;row++){

          for( col=0;col<n-row-1;col++){
            cout<<" ";   //for printing the spaces 
        }

        for ( col = 0 ;col<row +1;col++){
            cout<<"* ";
        }
      
        cout<<endl;
    }


return 0;

}

/*
so n=4  logic R0 has 3 spaces from start and 1* 
 R0 has 2 spaces from start and 2* 
  R0 has 1 spaces from start and 3*
  spaces = n-row-1 
  and row+1 stars go above logix goes !

  */




//        * 
//       * * 
//      * * * 
//     * * * * 
//    * * * * * 
//   * * * * * * 
//  * * * * * * * 
// * * * * * * * * 