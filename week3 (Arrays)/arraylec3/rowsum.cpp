#include <iostream>
#include <vector>
using namespace std;

void sumRowwise(vector<vector<int>>& arr, int rowsize, int colSize) {
    for (int i = 0; i < rowsize; i++) {
        int sum = 0;  // Reset sum for each row
        for (int j = 0; j < colSize; j++) {
            sum += arr[i][j];
        }
        cout << "The sum of row " << i << " is: " << sum << endl;
    }
}

void sumColwise(vector<vector<int>>& arr, int rowsize, int colSize) {
    for (int j = 0; j < colSize; j++) {
        int sum = 0; 
        for (int i = 0; i < rowsize; i++) {
            sum += arr[i][j];
        }
        cout << "The sum of column " << j << " is: " << sum << endl;
    }
}

void sumofArray(vector<vector<int>>& arr, int rowsize, int colSize) {
            int sum = 0; 
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colSize; j++) {
            sum += arr[i][j];
        }
    }
  cout << "The sum of Array is " << sum << endl;

}

void sumofDiagonal(vector<vector<int>>& arr, int rowsize, int colSize) {
            int sum = 0; 
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colSize; j++) {
            if(i==j){
            sum += arr[i][j];
            }
        }
    }
  cout << "The sum of Diagnonal elements is  " << sum << endl;

}


int main() {
    vector<vector<int>> arr = {{12, 22,33}, 
                               {34, 45,98},
                               {63, 24,57}};


    int rowsize = arr.size();
    int colSize = arr[0].size();
    
    sumRowwise(arr, rowsize, colSize);
    sumColwise(arr, rowsize, colSize);
    sumofArray(arr,rowsize,colSize);
    sumofDiagonal(arr,rowsize,colSize);

    return 0;
}



/*

The sum of row 0 is: 67
The sum of row 1 is: 177
The sum of row 2 is: 144
The sum of column 0 is: 109
The sum of column 1 is: 91
The sum of column 2 is: 188
The sum of Array is 388
The sum of Diagnonal elements is  114



*/
