// #include <iostream>
// #include <vector>
// using namespace std;

// int  peakElement(vector<int>& arr) {
//     int size = arr.size();
//     int s = 0;
//     int e = size - 1;

//     int mid = s + (e - s) / 2;
//     while (s < e)
//     {

//         if (arr[mid] < arr[mid + 1]) {
//             // Tum line A pe ho so right mei move karo
//             s = mid + 1;
//         } else {
//             // Part B mei mostly left mei move karna hota par 
//             // agar ans mid pe aa jaye aur most of them bole left mei move karna hai toh 
//             // dont consider as e =mid-1 
//             // conisder it as e = mid 
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }

//     // After the loop, s (or e) will be the index of the peak element
//     cout << "Peak element is: " << arr[mid] << " at index: " << mid << endl;
// }

// int main() {
//     vector<int> arr{10, 20, 70, 60, 50, 40, 15};
//     peakElement(arr);
// }




#include <iostream>
#include <vector>
using namespace std;

int  findPeakElement(vector<int>& arr) {
    int size = arr.size();
    int s = 0;
    int e = size - 1;
    int ansIndex =-1;

    int mid = s + (e - s) / 2;
    while (s <= e){

       if (mid+1<size && arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            ansIndex=mid;   // store and compute se nikala ki mid ans ho bhi sakta and nhi bhi 
            e = mid-1;
        }
        mid = s + (e - s) / 2;
    }

return ansIndex;
}

int main() {
    vector<int> arr{10, 20, 70, 60, 50, 40, 15};
 int index=  findPeakElement(arr);
 cout<<"Peak element ka index hai : "<<index<<endl;
}

/// Peak element ka index hai : 2