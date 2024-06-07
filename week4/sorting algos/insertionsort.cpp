#include <iostream>
#include <vector>
using namespace std;


void insertionSort(vector<int>&arr){

    int n =arr.size();
    for (int i=0;i<n-1;i++){
        for(int j=1;j<=i+1;j++)
        if(arr[i]>arr[j])swap(arr[i],arr[j]);
    }
}


int main(){

    vector<int>arr{5,4,3,2,1};
    insertionSort(arr);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


}