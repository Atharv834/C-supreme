#include <iostream>
using namespace std;

void threesum(int arr[],int size,int targetSum){

  for (int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
            if(arr[i]+arr[j]+arr[k]==targetSum){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
  }

}

int main()
{

    int size, targetSum;
    cout << "Enter the size of the array! :";
    cin >> size;

    cout << "Enter the targetsum of array :";
    cin >> targetSum;

    int arr[size];

    cout << "Enter the elements  of the array! :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    
    }
threesum(arr,size,targetSum);

}