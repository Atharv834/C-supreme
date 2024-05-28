#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void lastOcc(vector<int> &arr, int target,int &ansIndex)
{
    int size = arr.size();
    int s = 0, e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            ansIndex=mid;
            //last occurance ke liye right mei jao so (as last occc hamesha right mei hoga na)
            s=mid+1;
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
    lastOcc(arr,20,ansIndex);
     cout<<"last  occurance index is "<<ansIndex<<endl;

    return 0;
}

// last  occurance index is 2
// https://leetcode.com/problems/binary-search/submissions/1270597967/