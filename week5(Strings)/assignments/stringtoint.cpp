#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isInt(char c) {
        return c >= '0' && c <= '9';
    }

    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long result = 0;

        // Skip leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Handle optional sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }

        // Process digits
        while (i < s.length() && isInt(s[i])) {
            result = result * 10 + (s[i++] - '0');

            // Check for overflow
            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;
        }

        return result * sign;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "42";
    string s2 = "   -42";
    string s3 = "4193 with words";
    string s4 = "words and 987";
    string s5 = "-91283472332";

    cout << sol.myAtoi(s1) << endl; // Output: 42
    cout << sol.myAtoi(s2) << endl; // Output: -42
    cout << sol.myAtoi(s3) << endl; // Output: 4193
    cout << sol.myAtoi(s4) << endl; // Output: 0
    cout << sol.myAtoi(s5) << endl; // Output: -2147483648

    return 0;
}
