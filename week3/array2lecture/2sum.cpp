// #include <iostream>
// using namespace std;

// pair<int ,int> checkTwoSum(int arr[], int size, int targetSum)
// {

// pair<int,int>ans = make_pair(-1,-1);

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] + arr[j] == targetSum)
//             {
//                 ans.first =arr[i];
//                 ans.second=arr[j];
//                 return ans;
//             }
//         }
//         return ans;
//     }
// }
// int main()
// {

//     int size, targetSum;
//     cout << "Enter the size of the array! :";
//     cin >> size;

//     cout << "Enter the targetsum of array :";
//     cin >> targetSum;

//     int arr[size];

//     cout << "Enter the elements  of the array! :";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
    
//     }
//     pair<int,int>ans = checkTwoSum(arr,size,targetSum);

// if(ans.first==-1 && ans.second ==-1){
//     cout<<"Pair not found !";
// }
// else{
//     cout<<ans.first<<","<<ans.second<<endl;
// }

//     return 0;
// }


#include <iostream>
using namespace std;

void twoSum(int arr[],int size,int targetSum){

/* loop of j starts frm i+1 indicates that the pairs doesnt repeates gives unique pair
  */
  for (int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==targetSum){
                cout<<arr[i]<<","<<arr[j]<<endl;
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
  twoSum(arr,size,targetSum);

}