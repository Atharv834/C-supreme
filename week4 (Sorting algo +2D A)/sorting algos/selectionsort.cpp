#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void selectionSort(vector<int>&arr){

    int n =arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex= i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex= j;
            }
        }
        swap(arr[i],arr[minIndex]);

    }
}

 void printArray(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main(){


    vector<int>arr{55,44,33,22,11};
    selectionSort(arr);
    printArray(arr);
}