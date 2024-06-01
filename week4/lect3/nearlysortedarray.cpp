#include <iostream>
#include <vector>
using namespace std;


int  nearlySorted(vector<int>&arr,int target){

    int s=0;
    int e = arr.size()-1;
    
    while(s<=e){

        int mid = s+(e-s)/2;
        if(target == arr[mid]){  
            return mid;
        }
         if(target == arr[mid-1]){
            return mid-1;
        }
         if(target == arr[mid+1]){
            return mid+1;
        }
        else if(arr[mid]>target){
            e=mid-2;
        }
        else {
            s=mid+2;
        }
         mid = s+(e-s)/2;
    }
    return -1;
    
}

int main(){

    vector<int>arr{10,3,40,20,50,80,70};
    int target = 60;
   int ans = nearlySorted(arr,target);
    if(ans!=-1){
      cout<<"Found at index :"<<ans;
    }
    else{
        cout<<"not found !";
    }
}