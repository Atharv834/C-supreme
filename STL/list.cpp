#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {

    // CREATION
    list<int> myList;

    // INSERTION
    myList.push_back(5);    // 5
    myList.push_back(10);   // 5 -> 10
    myList.push_front(30);  // adding at start  30 -> 5 -> 10

    // DELETING from back and front
    myList.pop_back();      // 30 -> 5
    myList.pop_front();     // 5

    myList.remove(5);       // deletes all the elements with value 5

    // PRINTING the size of the list
    cout << "Size of the list is: " << myList.size() << endl;

    // ITERATING THROUGH LIST
    list<int>::iterator it = myList.begin();
    while (it != myList.end()) {
        cout << *it << " ";
        it++;
    }

    // INSERTION AT POSITION AND SWAPPING SAME AS ARRAY VECTORS

    return 0;
}
