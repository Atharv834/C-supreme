#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void checkPalindrome(vector<char>& arr) {
    int s = 0;
    int e = arr.size() - 1;

    while (s < e) {
        if (arr[s++] != arr[e--]) {
            cout << "Not a palindrome" << endl;
            return;
        }
    }

    cout << "Palindrome" << endl;
}

int main() {
    const char str[] = "racecar"; 

    vector<char> arr(str, str + strlen(str));

    // Call the function to check for palindrome
    checkPalindrome(arr);

    return 0;
}
