#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  missingNo(vector<int> arr)
{
    sort(arr.begin(), arr.end());  //tc = O(nlogn)
    int size = arr.size();
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ansIndex = -1;

    while (s <= e)
    {

        int number = arr[mid];
        int index = mid;
        int diff = number - index;

        if (diff == 0)
        {
            // right mei jao
            s = mid + 1;
        }
        else if (diff == 1)
        {
            // store and compute yeh answee ho sakta hai but left mei jao
            ansIndex = index;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    if (ansIndex == -1)
    {
        return n;
    }
    return ansIndex;
}

int main()
{

 vector<int>arr{0,1,3,4,5};
 missingNo(arr);

    return 0;
}


//  https://leetcode.com/problems/missing-number/submissions/1271050776/
// tc = O(nlogn)