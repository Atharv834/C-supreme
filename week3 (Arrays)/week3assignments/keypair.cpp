#include<iostream>
#include <algorithm>
using namespace std;

	bool hasArrayTwoCandidates(int arr[], int n, int x) {
    sort(arr, arr + 6);
    int s = 0, e = n - 1;
    while (s < e) {
        int sum = arr[s] + arr[e];
        if (sum == x)
            return true;
        else if (x > sum)
            s++;
        else
            e--;
    }
    return false;
}

int main(){

    int arr[]={10,20,30,40,50,60};
   int ans=  hasArrayTwoCandidates(arr,6,60);

   if(ans)cout<<"Pair exists";

}

//  https://www.geeksforgeeks.org/problems/key-pair5616/1