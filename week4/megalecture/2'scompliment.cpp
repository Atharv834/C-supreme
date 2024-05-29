#include <iostream>
#include <unordered_map>
using namespace std;


vector<int> oneCompliment(vector<int>&arr){
    
    int size=arr.size();
    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
     cout << "One's complement: ";
    for (int i = 0; i < size; i++) {
        cout<< arr[i]<<" ";
 
   }
   cout<<endl;
}

vector<int> twoCompliment(vector<int>&arr){
 oneCompliment(arr);

 int size = arr.size();
 int carry =1;
     for (int j=size-1;j>=0;j--){
        int sum = arr[j]+carry;
        a[j]=sum%2;
        carry=sum/2;
     }
      cout << "Two's complement: ";
       for (int i = 0; i < size; i++) {
        cout<< arr[i]<<" ";
 
   }
cout<<endl;
}

int main (){


vector<int>arr{0,1,0,1,0,1,1};
twoCompliment(arr);


    return 0;
}