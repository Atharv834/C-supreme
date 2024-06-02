
#include <iostream>
#include <vector>
using namespace std;


double Precisionquotient(int divident, int divisor) {   //mega class 
    double s = -divident;
    double e = divident;
    double ansIndex = -1; 

    while ((e - s) > 0.001) {   //double use karne se hi start se hi precision use hua!
        double mid = s + (e - s) / 2.0;

        double mul = divisor * mid;

        if (mul < divident) {
            s = mid;
            ansIndex = mid;  
        } else if (mul == divident) {
            return mid;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2.0;
    }
    return ansIndex;
}

int main(){

    int divident = 7;
    int divisor = -3;

     double  ans1 = Precisionquotient(abs(divident), abs(divisor));   // idhar dono be se ek bhi negative ane par asnwer shi nhi chal rha 

    if ((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0)) {  // isliye yeh lagaya 
        ans1 = 0 - ans1;
    }
     cout << "Quotient is with precision is : " << ans1;


}
