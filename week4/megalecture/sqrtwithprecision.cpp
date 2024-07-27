#include <iostream>
#include<vector>
using namespace std;


int mySqrt(int x) {   // issee neartest interger milta sqrt ke for sqrt of 63 7 aayega  
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

    double myPrecision(int n){
        double sqrt = mySqrt(n);  //TC = O(logn) as binary search 
        int precision = 4;
        double step = 0.1;

        while (precision--)  //TC =  O(precision*10)
        { /// jitne bar precison hai uthi bar loop chalrga
            double j = sqrt;
            while (j * j < n)   //maximum 10 bar chalega 
            {
                sqrt = j;
                j += step;
            }
            // ek precision ka answer mila 
            step/=10;
        }
        return sqrt;
    }


// easy method than using 2 above function is akele se answer aaryag 2 function 
   double binarySearchPrecision(int n){
    double s=0;
    double e =n;
    double ansIndex =-1;
    while((e-s)> 0.0001){    // (e-s)>0 isse ko hi (e-s)>0.0000.1 yeh precison hai 
        double mid = s+(e-s)/2;
        double sqr= mid*mid;

        if(sqr<=n){
            ansIndex=mid;
            s = mid; // s=mid+1 karne ni hai kyuki ham keft mei hai aur right mei jana toh thoda aage jayenge so s=mid+.0000001 likan isse acha s=mid karlo na
        }
        else{
            e=mid;  // same as above 
        }
         mid = s+(e-s)/2;
    }
    return ansIndex;
   }

    int main(){

        int n = 63;


        float ans = myPrecision(n);  // total TC = O(logn)+o(n)  = O(n);
        cout << "Precision sqrt is using method1 :" << ans << endl;


        double ans1=binarySearchPrecision(n);   // TC = O(logn)  using binary search 
        cout << "Precision sqrt is using method2 :" << ans1 << endl;
    }