#include <iostream>
using namespace std;

int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans=-1;

        while (s <= e) {
           long long int mid = s + (e - s) / 2;

            long long int midsqr = mid * mid;
        
            if (midsqr == x) {
                return mid;
            } 
            else if (midsqr > x) {
                e = mid - 1;
            } else {
                ans=mid;
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

int main (){

    int num = 63;
    double ans = mySqrt(num);
    cout << "The sqrt of " << num << " is nearer to " << ans;
}

// 54 agar number diya hai toh iska sqrt 0-54 ke bich mei ho chalega hamehsa 
// so iska TC O(logn) hoga 

