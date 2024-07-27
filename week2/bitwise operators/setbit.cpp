#include <iostream>
using namespace std;

int main(){

int n,setbitCount=0;
cout<<"Enter the value of n :";
cin>>n;

while(n!=0){
   
  int lastbit =n&1;
  if(lastbit == 1){
    setbitCount++;
  }
  n = n>>1;

}

cout<<"TOtal set bits are :"<<setbitCount;

return 0;

}

/* main aim to calulate the no of 1's present in the binary no of the above number */
