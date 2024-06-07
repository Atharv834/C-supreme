#include<iostream>
#include<cstring>
using namespace std;

int some(string s){
    int n = s.length();
    int i=0;int j=0;
    int mid = i,j;

    while(i!=n-1 && j!=n-1){

        if(mid==0 && mid==n)return s[mid];
        else{
            int ans = s.substr(mid-1,mid+1);
            return ans;
        }
    }
 return -1;
}

int main(){


    string s = "helloword";
    int a = some(s);
    cout<<a;

}