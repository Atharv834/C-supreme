#include <iostream>
#include <algorithm>
#include <vector>
#include<numeric>
using namespace std;


int main(){


vector<int>arr{10,20,30,40,50};

int totalSum = accumulate(arr.begin(),arr.end(),0);  // initialises with zero sum 
cout<<totalSum<<endl;




        //PARTIAL SUM 
vector<int>result(arr.size());

partial_sum(arr.begin(),arr.end(),result.begin());
for(auto a:result)
cout<<a<<" ";

    return 0;
}