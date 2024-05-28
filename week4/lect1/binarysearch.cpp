#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binarySearch(vector<int> &arr, int target)
{
    int size = arr.size();
    int s = 0, e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            cout << target << " found at " << mid;
            return;
        }
        else if (arr[mid] > target)
        {
            e = (mid - 1);
        }
        else
        {
            s = mid + 1;
        }
        // yeyh line hamesha bhul jate hai log
        //  jabhi s,e change hota tabhi mid chnage hota so update krna
        mid = s + (e - s) / 2;
    }
    cout << target << " not found !";
}

int main()
{

    vector<int> arr{10, 20, 50, 70, 90, 100};
    int size=arr.size();

    binarySearch(arr, 500);


    return 0;
}
