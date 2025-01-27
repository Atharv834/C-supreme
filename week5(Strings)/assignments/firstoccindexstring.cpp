#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    if (needle.empty())
        return 0;

    int hayLen = haystack.length();
    int needleLen = needle.length();

    for (int i = 0; i <= hayLen - needleLen; ++i) {
        if (haystack.substr(i, needleLen) == needle) {
            return i;
        }
    }
    return -1;
}

int main() {
    string haystack = "hellomynameis";
    string needle = "my";

    int result = strStr(haystack, needle);
    cout << "The first occurrence of \"" << needle << "\" in \"" << haystack << "\" is at index: " << result << endl;

    return 0;
}
