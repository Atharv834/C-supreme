#include <iostream>
#include <vector>
using namespace std;

/* Function to print the elements of the array */
void print(const vector<int>& v) {
    int size = v.size();
    cout << "Printing the array: ";
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;

    while (1) {
        int d;
        cout << "Enter the element of array dynamic (-1 to stop): ";
        cin >> d;

        if (d == -1) {  // Exit condition
            break;
        }

        v.push_back(d);

        cout << "Capacity: " << v.capacity() << endl;
        cout << "Size: " << v.size() << endl;
        print(v);
    }

    vector<int> arr{1, 3, 56, 6};
    print(arr);

    vector<int> arr4={13, 33, 456, 86};
    print(arr4);

    vector<int>arr6(arr4);  //intitiasling the arr6 with arr4 
    print(arr6);

    return 0;
}


/*
for pushing the elements we write as v.push_back(element)  it would push it from the front 

v.pop_back() -it o=would direclty dleete the last element form the array !
v.clear()  -clears all the element of the vector array 

vector<int>v(size,deafualtvalue)  == vector<int>v(5,-1) == -1 -1 -1 -1 -1 
it woudl initialise the vector v with size 5 and all elements as -1

vector<int>v{1,3,5,7};  --intitialise array 

*/
