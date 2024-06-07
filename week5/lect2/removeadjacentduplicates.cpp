#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

  string removeDuplicates(string s) {
        string ans = "";
        for (char currentChar : s) {
            if (ans.empty() || currentChar != ans.back()) {
                ans.push_back(currentChar);
            } else {
                ans.pop_back();
            }
        }
        return ans;
    }

int main(){


    string s="abbaca";
    string a =removeDuplicates(s);
    cout<<a;
}


/*

https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1278318089/

*/