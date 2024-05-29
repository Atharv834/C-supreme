#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // arr.insert(arr.begin(),100);  // insert the element at any postion

    arr.insert(arr.begin() + 2, 70);

    // arr.erase(arr.begin(),arr.end());   // erass tghe element from arr

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << *(arr.begin()) << endl; // stars prints the element present at that index
    cout << arr.front() << endl;    // prints the first element in arr
    cout << arr.back() << endl;     // last element

    cout << arr.empty() << endl;

    /// SWAPPING TWO VECTOR
    vector<int> first{10, 20, 30, 40, 50};
    vector<int> second{100, 300, 500};

    first.swap(second);
    for (int i = 0; i < first.size(); i++)
    {
        cout << first[i] << " ";
    }

    for (int i = 0; i < second.size(); i++)
    {
        cout << second[i] << " ";
    }
    cout << endl;

    // FOR EACH LOOP

    for (int i : arr)
    {
        cout << i << " ";
    }

    //   CREATING A ITERATOR

    vector<int>::iterator it = arr.begin(); // creating and initiaslising with first element

    while (it != arr.end())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}