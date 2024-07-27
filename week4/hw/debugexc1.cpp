#include <iostream>
#include <vector>
using namespace std;

int min(vector<int>&arr){
    int s=0;
    int size=arr.size();
    int e=size-1;
    int ans =-1;

       if (arr[s] < arr[e]) {
            return s;
        }

    while(s<=e){
        int mid =s+(e-s)/2;
        if(arr[mid]>arr[mid+1]){

        }

        if(arr[s]>arr[mid])e=mid-1;
        else ans = mid,s=mid+1;
        if(mid<size && arr[mid]>arr[mid+1])return mid+1;

    }
    return ans;
}

int binarySearch(vector<int>& nums, int target) {
        int left = 0, right = int(nums.size());
                    int mid = left + (right - left) / 2;

        while (left < right) {
            if (nums[mid] <= target) {
                left = mid;
            } else {
                right = mid;
            }
                    mid = left + (right - left) / 2;

        }
        
        if (left >= 0 and nums[left] == target) {
            return left;
        } else {
            return -1;
        }

        return mid;
    }

    int main(){

        vector<int>arr{11,22,33,55,70};
        // int a=min(arr);
        // cout<<arr[a];
        int target =33;
        int ans = binarySearch(arr,target);
        cout<<ans;

    }