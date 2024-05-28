
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> &arr)
{
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeDup(vector<int>&arr){
    int size = arr.size();
    int count =0;
     for (int i = 0; i < size; i++)
    {
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
    }
    sort(arr.begin(), arr.end());
    arr.erase(remove(arr.begin(), arr.end(), -1), arr.end());

    printArray(arr);
 
}

int main()
{

    vector<int> arr{0,0,1,1,1,2,2,3,3,4};
    removeDup(arr);
}
/*
SI- starting index   EI -ending index

sort(SI,EI) sorts the array in the asc order 

remove(SI,EI,element) - trvaerses all array and if the array element not matches the element then
then element not matched are kept at the strat and all the element(vlue)at the last 

arr.erase(si,ei);


*/