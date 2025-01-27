class Solution {
public:
    int longestValidParentheses(string s) {
        int i=0;
        string ans = "";
          for (char currentChar : s){
            if( ans.empty() && s[i]=='(' ) ans.push_back(s[i]);
            else if ( ans.empty() && s[i]!='('  ) i++;
            else if(ans.back()!=currentChar)ans.push_back(currentChar);
          }
          if(ans.front()=='(' && ans.length()==1){
            return 0;
          }
          return ans.length();
    }
};




/*  https://leetcode.com/problems/longest-valid-parentheses/description/  */