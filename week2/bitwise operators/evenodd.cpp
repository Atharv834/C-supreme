#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the value of n :";
cin>>n;


if( (n&1)==1){
    cout<<n << " "<< "is odd number ";
}
else{
    cout<<n <<" "<<"is even number";
}


    return 0;
}



/*
logic is that if n&1==0 then its even otherwise odd using & operator &  
*/