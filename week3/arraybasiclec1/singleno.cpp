#include <iostream>
using namespace std;

int findUniqueno(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int UniqueNumber = findUniqueno(arr, size);
    cout << "The single number is: " << UniqueNumber << endl;

    return 0;
}


/* XOR ^ cancels out the two number so it takes out tow same number */



// METHOD 2 


// #include <iostream>
// #include<vector>
// using namespace std;

// bool findUnique(vector<int> &arr,int &uniqueno)
// {
//     int i=0;
//     while (i < arr.size())
//     {
       
//         if (arr[i] != arr[i + 1] || i == (arr.size() - 1))
//         {
//            uniqueno=arr[i];
//             return true;
//             break;
//         }
//         else{i+=2;}
//     }

//     return false;
// }

// int main() {
    
// vector<int>arr{1,2,2,4,4,5,5,6,6,7};
//     int  uniqueno ;


//  bool ans = findUnique(arr,uniqueno);
//     if (ans) {
//         cout << "Unique number is " << uniqueno << endl;
//     } else {
//         cout << "No unique number found!" << endl;
//     }


//     return 0;
// }



// https://leetcode.com/problems/single-number/