#include <iostream>
using namespace std;

void extremePrinting(int arr[],int size){
    int start =0 ,end=size-1;

    while(start<=end){

        cout<<arr[start]<<endl;
        start++;

        if(end>start){

        cout<<arr[end]<<endl;
        end--;
        }

        }

 
}

int main()
{

    int size, arr[100];

    cout << "Enter the size of the array :";
    cin >> size;

    cout << "Enter the elements  of the array! :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    extremePrinting(arr,size);

return 0;

}


/*

Enter the size of the array :5
Enter the elements  of the array! :1 2 3 4 5
1
5
2
4
3

*/