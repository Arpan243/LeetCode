// 1641. Count Sorted Vowel Strings

// Given an integer n, return the number of strings of length n that consist only of vowels (a, e, i, o, u) and are lexicographically sorted.

// A string s is lexicographically sorted if for all valid i, s[i] is the same as or comes before s[i+1] in the alphabet.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> dp(5, 1);
        int ans = 0;
        
        while(--n){
            for(int i=3; i>=0; i--){
                dp[i] += dp[i+1];
            }
        }
        
        for(auto x:dp) ans += x;
        
        return ans;
    }
};