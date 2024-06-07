#include <iostream>
#include <string>
#include <algorithm> // For swap function
#include <cctype> // For tolower function
using namespace std;

    bool isVowel(char& ch) {
        ch = tolower(ch); // Convert the character to lowercase for simplicity
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string reverseVowels(string &s) {
        int st = 0;
        int e = s.length() - 1;
        while (st < e) {
            if (isVowel(s[st]) && isVowel(s[e])) {
                swap(s[st], s[e]);
                st++;
                e--;
            } else if (!isVowel(s[st])) {
                st++;
            } else if (!isVowel(s[e])) {
                e--;
            }
        }
        return s;
    }


int main() {
   
    string s = "hello";
    cout << "Original string: " << s << endl;
    string result = reverseVowels(s);
    cout << "Reversed vowels string: " << result << endl;
    return 0;
}


/* 

    USE TWO POINTER APPROACH IS ALWAYS USEFUL 
    
https://leetcode.com/problems/reverse-vowels-of-a-string/description/

*/