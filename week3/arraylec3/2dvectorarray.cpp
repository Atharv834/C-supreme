#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr(4, vector<int>(3, 0));
    int rowsize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}