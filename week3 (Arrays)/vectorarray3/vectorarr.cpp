#include <iostream>
using namespace std;

/* just a function to printing the elements of array */
void print(int arr[], int size)
{
    cout << "Printing the array :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int size;
    cout << "Enter the value of sizeof array :";
    cin >> size;

    // dynamic alllocation of the array
    int *arr = new int[size];

    cout << "Enter the elements of array !\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    print(arr, size);

    return 0;
}