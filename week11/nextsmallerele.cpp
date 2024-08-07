#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>

void SmallerElement(stack<int>s , vector<int>arr,vector<int>ans){

    stack<int>s;
    s.push_back(-1);
    int n=arr.size();
    for (int i=n-1;i>=0;i--){
        int ele=arr[i];

    while(s.top()>ele){
        s.pop();
    }
    ans.push_back(s.top());
    arr.push(ele);

    }

}


int main(){

    vector<int>v

    stack<int>s ;
    s.push_back(-1);
   

}