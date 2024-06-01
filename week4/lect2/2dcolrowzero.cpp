#include <iostream>
#include <vector>
using namespace std;

    int target2dSearch(vector<vector<int>> &arr, int target){

        int s = 0;
        int r = arr.size();
        int c = arr[0].size();
        int e = (r * c) - 1;

        while (s <= e){
            int mid = s + (e - s) / 2;
            int rowIndex = mid / c;
            int colIndex = mid % c;

            if (arr[rowIndex][colIndex] == target){
                return colIndex,rowIndex;
                break;
            }
            else if (arr[rowIndex][colIndex] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }

        void setColZero(vector<vector<int>> & arr, int colIndex){
            for (int row = 0; row < arr.size(); ++row){
                arr[row][colIndex] = 0;
            }
        }

        void setRowZero(vector<vector<int>> & arr, int rowIndex)  {
            for (int col = 0; col < arr[rowIndex].size(); ++col){
                arr[rowIndex][col] = 0;
            }
        }

        void setZeroes(vector<vector<int>> & arr, int target){
            int ans = target2dSearch(arr, 0);
            if (ans != -1){
                int colIndex = ans % arr[0].size();
                int rowIndex = ans / arr[0].size();
                setColZero(arr, colIndex);
                setRowZero(arr, rowIndex);
            }
        }

        return -1;
    }

 int main(){

     vector<vector<int>> arr{10, 20, 30, 40, 0, 60, 70, 80, 90};
     target2dSearch(arr,0);



     return 0;
 }