#include <iostream>
using namespace std;

double mySqrt(int x) {
        int s = 0;
        int e = x;
        int ansIndex = -1;

        long long int mid = s + (e - s) / 2;
        
        while (s <= e) {

            long long int prod = mid * mid;
            if (prod == x) {
                return mid;
            } else if (prod < x) {
                ansIndex = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ansIndex;
    }

int main (){


int num =54;
double ans = mySqrt(num);
cout<<ans;
}


