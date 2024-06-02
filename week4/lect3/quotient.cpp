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
       mid = e + ((s - e) >> 1);
    }
    return ansIndex;
}

double Precisionquotient(int divident, int divisor) {   //mega class 
    double s = -divident;
    double e = divident;
    double ansIndex = -1; 

    while ((e - s) > 0.001) {
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
    int ans = quotient(abs(divident), abs(divisor));   // idhar dono be se ek bhi negative ane par asnwer shi nhi chal rha 

    if ((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0)) {  // isliye yeh lagaya 
        ans = 0 - ans;
    }
     cout << "Quotient is wihtout precision is : " << ans<<endl;



     double  ans1 = Precisionquotient(abs(divident), abs(divisor));   // idhar dono be se ek bhi negative ane par asnwer shi nhi chal rha 

    if ((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0)) {  // isliye yeh lagaya 
        ans1 = 0 - ans1;
    }
     cout << "Quotient is with precision is : " << ans1;


}
