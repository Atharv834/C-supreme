#include <iostream>
#include <string>
#include <algorithm> 
#include<unordered_map>
using namespace std;

 bool isAnagram(string s, string t) {

        if (s.length() != t.length())  return false;
       
         unordered_map<char, int> freqS;
         unordered_map<char, int> freqT;

        for (char c : s)  freqS[c]++;
         for (char c : t)  freqT[c]++;

        return freqS == freqT;
    }


    int main(){

        string s = "anagram";
        string t = "nagaram";
        bool ans = isAnagram(s,t);
        if(ans!=0) cout<<"Its a valid anagram";
        else cout<<"Not a valid anagram";
    }


    /*
    https://leetcode.com/problems/valid-anagram/submissions/1280138663/
    
    */