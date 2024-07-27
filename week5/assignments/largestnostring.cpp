#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
using namespace std;

    vector<int> separateDigits(const vector<int>& arr) {
        vector<int> result;

        for (int i : arr) {
            string numStr = to_string(i); // Convert number to string
            for (char ch : numStr) {
                result.push_back(ch - '0'); // Convert each character to an
                                            // integer and add to result
            }
        }

        return result;
    }
  

    string largestNumber(vector<int>& arr) {
        vector<int> result = separateDigits(arr);
        sort(result.begin(), result.end(), [](int a, int b) { return a > b; });
        string ans;
        for (int i : result) {
            ans += to_string(i);
        }

        // cout << ans << endl;
        return ans;
    }

// void separate(vector<int> &arr){
//     vector<int> v;
//     int size = arr.size();
//     for (int i = 0; i < size; i++){
//         for (int j = 0; j < arr[i].size(); j++){
//            int num = arr[i][j];
//            v.push_back(num);
//         }
//     }
//     for (auto i : v){
//         cout << i;
//     }
// }

int main() {
    vector<int> arr = {3,30,34,5,9};
    string ans1 = largestNumber(arr);
    cout<<ans1;



    return 0;
}
