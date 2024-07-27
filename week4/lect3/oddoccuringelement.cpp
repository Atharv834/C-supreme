#include <iostream>
#include <vector>
using namespace std;

int findOddoccurance(vector<int>& arr) {

        int s = 0;
        int size = arr.size();
        int e = size - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (s == e) {
                return s;
            }
            if ((mid >= 0 && arr[mid] != arr[mid - 1]) &&
                (mid < size && arr[mid] != arr[mid + 1])) { 
                return mid;
            }

            if (mid & 1) {
                if (mid>=0 && arr[mid] == arr[mid - 1]) {
                    s = mid + 1;
                }
                if (mid<size && arr[mid] == arr[mid + 1]) {
                    e = mid - 1;
                }
            } else { 
                if (mid>=0 && arr[mid] == arr[mid - 1]) {
                    e = mid - 1;
                }
                if (mid <size && arr[mid] == arr[mid + 1]) {
                    s = mid + 1;
                }
            }
        }
        return -1;
    }

int main()
{

    vector<int> arr{1,1,2,2,3,3,5};
    int ans = findOddoccurance(arr);
    if (ans != -1){
        cout << "Element with odd occurrence is: " << arr[ans] << endl;
    }
    else{
        cout << "No element with odd occurrence found" << endl;
    }
    return 0;
}