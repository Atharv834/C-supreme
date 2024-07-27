#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


// Returns a non-zero value (true) if ch is an alphabetic letter (i.e., A-Z or a-z) by isalpha() function .


string reverseOnlyLetters(string s) {
        int st = 0;
        int end = s.length() - 1;
        
        while (st < end) {
            while (st < end && !isalpha(s[st])) {  
                st++;
            }
            // Move end backward if it's not a letter
            while (st < end && !isalpha(s[end])) {
                end--;
            }
            if (st < end) {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }
        
        return s;
    }

    
    int main(){

        string s = "a-bC-dEf-ghIj";
        string ans = reverseOnlyLetters(s);
        cout<<ans;
    }


/*  https://leetcode.com/problems/reverse-only-letters/  */