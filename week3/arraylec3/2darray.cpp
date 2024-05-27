#include <iostream>
using namespace std;

void print(int arr[][3], int n, int m)
{
    cout << "Printing the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==j){
            cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{


    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    print(arr, 3, 3);

    return 0;
}

/*

PRinting the array 2d row wise   print arr[i][j]
Printing the array:
10 20 30 
40 50 60 
70 80 90 


Printing the array column wise  print arr[j][i]

Printing the array:
10 40 70 
20 50 80 
30 60 90 

Printubg the diagonal elements of the array (put tge condition i==j)
Printing the array:
10 
50 
90 

*/