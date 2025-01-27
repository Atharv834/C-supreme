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

        if (diff == 0){
            // right mei jao
            s = mid + 1;
        }
        else if (diff == 1){
            // store and compute yeh answee ho sakta hai but left mei jao
            ansIndex = index;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
   
    return ansIndex;
}

int main(){

    vector<int> arr{0, 1, 2, 3, 5, 6, 7, 8};
    int ans = missingNo(arr);


    if (ans != -1){
        cout << "Missing no is : " << ans;
    }
    else{
        cout << "No element is missing !" << endl;
    }

    return 0;
}

//  https://leetcode.com/problems/missing-number/submissions/1271050776/
// tc = O(nlogn)