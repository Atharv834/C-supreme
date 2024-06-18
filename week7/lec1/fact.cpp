#include<iostream>
using namespace std;

int getFact(int n){

    if(n==1 || n==0) return 1;
    int fact = getFact(n-1);
    int ans = n*fact;   //return n*getFact(n-1);
    return ans;
}

int pow(int n){

    if( n==0) return 1;  
    return  2* pow(n-1);
}


int main(){

int n;
cout<<"Enter the number to calcaute the factorial : ";
cin>>n;

int ans = getFact(n);
cout<<"fActorial of "<<n<<" is : "<<ans<<endl;

int ans1 = pow(n);
cout<<"Power of 2 raise to "<<n<<" is : "<<ans1;




}