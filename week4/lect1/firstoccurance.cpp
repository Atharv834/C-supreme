#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// remember for first occ store the result and compute so 

void firstOcc(vector<int> &arr, int target,int &ansIndex)
{
    int size = arr.size();
    int s = 0, e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            ansIndex=mid;
            //first occurance ke liye left mei jao so (as first occc hamesha left mei hoga na)
            e=mid-1;
        }
         if (arr[mid] > target)
        {
            e = (mid - 1);
        }
        if(arr[mid]<target) {
            s = mid + 1;
        }
       //update karna mat bhoolna mid ko 
        mid = s + (e - s) / 2;
    }
}



int main()
{

    vector<int> arr{10,20, 20, 50, 70, 70, 70, 90,90, 100};
    // int size=arr.size();
    int ansIndex=-1;

    firstOcc(arr,20,ansIndex);
    cout<<"First occurance index is "<<ansIndex<<endl;

    return 0;
}


/*

First occurance index is 1
last  occurance index is 2

https://leetcode.com/problems/binary-search/submissions/1270597967/
*/