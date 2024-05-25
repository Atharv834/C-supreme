#include <iostream>
using namespace std;


/*  Making a function for linear seacrhing of the target element in an array !*/

bool findtargetele(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << target << " " << "found at index " << i << endl;
            return true;
        }
    }

    return false;
}



int main()
{

    int size;
    int  target;
    cout << "Enter the size of the array! :";
    cin >> size;
    
    int arr[size];

    cout << "Enter the elements  of the array! :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element ! :";
    cin >> target;

    bool presentele = findtargetele(arr, size, target);

/* If the target element not present in the array the it would print below ! */
     if(!presentele){
        cout<<"OOps the target element is not present !";
     }


    return 0;
}