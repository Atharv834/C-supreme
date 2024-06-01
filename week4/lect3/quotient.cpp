#include <iostream>
#include <vector>
using namespace std;

// bina divide karke kese quotient nikale wihtout using the % and / operator 
int quotient(int divident, int divisor){

    int s = -divident;
    int e = divident;
    int ansIndex = -1;

    while (s <= e){
        int mid = e + ((s - e) >> 1);  //right shift se divide by 2 karte isliye division nhi use karns tha isliye 
    
         // (divident * quotient)+ remainder = divisor 

        if (divisor * mid < divident){
            s = mid + 1;
            ansIndex = mid;  // store and compute se nikala
        }
        else if (divisor * mid == divident){
            return mid;
        }
        else{
            e = mid - 1;
        }
        mid = e + (s - e) / 2;
    }
    return ansIndex;
}

int main(){

    int divident = -50;
    int divisor = 5;
    int ans = quotient(abs(divident), abs(divisor));   // idhar dono be se ek bhi negative ane par asnwer shi nhi chal rha 

    if ((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0)) {  // isliye yeh lagaya 
        ans = 0 - ans;
    }

    cout << "Quotient is " << ans;
}
