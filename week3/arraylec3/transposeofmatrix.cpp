#include <iostream>
#include <vector>
using namespace std;


// METHOD 1
void Transpose(vector<vector<int>> &arr, int rowsize, int colSize)
{
    /* for transpose the (i,j) elements with (j,i) thus transposed !*/
    int ans[100][100];
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            ans[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout << endl;
    }
}



int main() {
    vector<vector<int>> arr = {{12, 22,33}, 
                               {34, 45,98},
                               {63, 24,57}};


    int rowsize = arr.size();
    int colSize = arr[0].size();

    Transpose(arr,rowsize,colSize);


return 0;

}


/*

transpose of the matrix is 

12 34 63 
22 45 24
33 98 57


*/