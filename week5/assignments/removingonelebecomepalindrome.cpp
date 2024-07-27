#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string &st, int s, int e) {
    while (s < e) {
        if (st[s++] != st[e--]) {
            return false;
        }
    }
    return true;
}

bool removingOnePalindrome(string &st) {
    int s = 0;
    int e = st.length() - 1;

    while (s < e) {
        if (st[s] == st[e]) {  // sab agar same hoga means palindrome hoga matlab
            s++;
            e--;
        } else {
            bool ans1 = checkPalindrome(st, s + 1, e);  //checking for s+1 to e considering situation when deleting sth elememt
            bool ans2 = checkPalindrome(st, s, e - 1);   //checking for s to e-1 considering situation when deleting eth elememt
            return ans1 || ans2;
        }
    }
    return true;   /// while loop se bahar ho matlab true sab palidmrome hai puri string 
}

int main() {
    string st = "helloword";
    cout << (removingOnePalindrome(st) ? "true" : "false") << endl;
    return 0;
}
