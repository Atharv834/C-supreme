#include <iostream>
#include <algorithm> // For std::max
#include <climits>   // For INT_MIN
using namespace std;

int findMax(int arr[], int size)
{

    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxAns = max(arr[i], maxAns);
    }
    return maxAns;
}

int findMin(int arr[], int size)
{

    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minAns = min(arr[i], minAns);
    }
    return minAns;
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

    int maxValue = findMax(arr, size);
    cout << "Max value is :" << maxValue << endl;

    int minValue = findMin(arr, size);
    cout << "Min value is :" << minValue << endl;
}