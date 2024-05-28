#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){


vector<int>arr{0,1,2,4,5};
vector<int>arr1{0,1,2,3,4,5};

int sum=0,sum1=0;
sum= (arr.size()(arr[0]+arr[arr.size()]))/2;

sum1= (arr1.size()(arr[0]+arr1[arr1.size()-1]))/2;

cout<<"missing vlaue is "<<sum1-sum<<endl;

    return 0;

}

