#include <iostream>
using namespace std;

int oddEven(int n){
    if(n%2==0){
        cout<<n <<" "<<"is even number";
    }
    else{
         cout<<n <<" "<<"is odd number";
    }
}

int main(){

int n;
cout<<"Enter the value of n :";
cin>>n;

oddEven(n);
    return 0;
}