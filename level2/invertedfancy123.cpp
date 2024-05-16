#include <iostream>
using namespace std;

int main()
{

    int n, row, col;
    cout << "Enter the no of rows and cols( square pyramid ) :";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < 2*(n-row-1)+1; col++)
        {
            if(col%2==0){
                cout<<n-row<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout << endl;
        
        }

    return 0;
}


            // Enter the no of rows and cols( square pyramid ) :10
            // 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 
            // 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 
            // 8 * 8 * 8 * 8 * 8 * 8 * 8 * 8 
            // 7 * 7 * 7 * 7 * 7 * 7 * 7 
            // 6 * 6 * 6 * 6 * 6 * 6 
            // 5 * 5 * 5 * 5 * 5 
            // 4 * 4 * 4 * 4 
            // 3 * 3 * 3 
            // 2 * 2 
            // 1 