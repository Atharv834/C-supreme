#include <iostream>
#include <vector>
using namespace std;


// bool checkSorted(vector<int>&arr,int index){   //babbar wala code 

//     int size=arr.size()-1;
//     index=0;
//     if(index==size) return true;  //matalb arrya sorted hai base case


//     bool currentAns=false;
//     bool RecursiveAns=false;
//     if(arr[index]<arr[index+1]) currentAns=true; 

//     RecursiveAns= checkSorted(arr,index+1);

//    return (currentAns && RecursiveAns);
// }

bool checkSorted(vector<int>& arr, int index) {
    int size = arr.size() - 1;
     if (index == size) return true;  // Base case: reached the end of the array
     if (arr[index] > arr[index + 1]) return false; // If current element is greater than the next, not sorted
     return checkSorted(arr, index + 1); // Recursively check the rest of the array
}

int main() {
    vector<int> arr{10, 20, 30,70, 40, 50, 60};
    int index = 0;

    if (checkSorted(arr, index)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}