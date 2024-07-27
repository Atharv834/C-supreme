#include <iostream>
#include <vector>
#include <algorithm> // Include this header for the sort function
using namespace std;

void print(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool myComp(int&a ,int&b){
    return a<b;  // a<b reutrn the increasing order
// a>b return the decreasing order
}

int main() {

   vector<int> arr{5, 4, 3, 2, 1};
    sort(arr.begin(), arr.end(),myComp);  // desc order 
    print(arr);    


    return 0;
}
