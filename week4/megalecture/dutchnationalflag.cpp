#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortzeroonetwo(vector<int>& arr) {  //TC = O(n)  overall 
    int n = arr.size();
    int zeroC = 0, oneC = 0, twoC = 0;


  // counts the no of zeroes and ones and twoo int the array and then apply loop acc to print 
    for (int i = 0; i < n; i++){   //TC = O(n)
        if (arr[i] == 0)  zeroC++;
        else if (arr[i] == 1)  oneC++;
        else twoC++;
    }

    int index = 0;
    for (int i = 0; i < zeroC; i++) arr[index++] = 0;       
    for (int i = 0; i < oneC; i++) arr[index++] = 1;
    for (int i = 0; i < twoC; i++) arr[index++] = 2;

    }

                                 // Dutch National Flag algorithm

     void DutchnationalFlag(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0, high = n - 1;
        
      
        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } else if (arr[mid] == 1) {
                mid++;
            } else {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }

    void printArray(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    int main() {
    vector<int> arr{2, 0, 2, 1, 1, 0};
    DutchnationalFlag(arr);
    cout<<"Printed via the sort color dutch national algo :";
    printArray(arr);
    
    cout<<endl;
    
    
    sortzeroonetwo(arr);
    cout<<"Printed via the  sortzeroonetwo fucntion :";
    printArray(arr);

    

    return 0;
}