#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> &arr)
{
    int s = 0;
    int size = arr.size();
    int e = size - 1;
    int ans = -1;

    if (arr[s] < arr[e])   return s;   // if the array is not sorted then
     if (s == e) return s;   // if only single element is present then 
    

    while (s <= e){
        int mid = s + (e - s) / 2;

        if (arr[s] > arr[mid]) e = mid - 1; // element present at the right 

        else ans = mid, s = mid + 1;  // present at the left 

        if (mid < size && arr[mid] > arr[mid + 1]) 
            return mid + 1;   // smallest wale ke element pe hi mid aa gya then 
    }
    return ans;
}

    int main(){

        vector<int>arr{11,13,15,17};
        int a=min(arr);
        cout<<arr[a];   // array ka element print karta hai
        
    }