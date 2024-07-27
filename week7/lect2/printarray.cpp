#include <iostream>
#include<vector>
using namespace std;

void printArr(vector<int> &arr, int index)
{
    if (index == arr.size())  return;  //mtalba tum arr ke bahar ho 
    cout << arr[index] << endl;  //array print karo 
    printArr(arr, index + 1);   
}

bool findElement(vector<int> &arr, int index, int target) {
    if (index == arr.size()) return false;   
    if (arr[index] == target) {  //element mil gya bros!
        return true;
    }
    return findElement(arr, index + 1, target); //nexr element pe dhundo !
}



int main() {
    vector<int> arr{10, 20, 30, 40, 50, 60};
    int index = 0;
    bool found = findElement(arr, index, 750);
    cout<<found;
    return 0;
}