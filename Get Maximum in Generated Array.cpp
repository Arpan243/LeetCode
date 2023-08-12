// 1646. Get Maximum in Generated Array

// You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:

// nums[0] = 0
// nums[1] = 1
// nums[2 * i] = nums[i] when 2 <= 2 * i <= n
// nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
// Return the maximum integer in the array nums​​​.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n < 2) return n;
        vector<int> dp(n+1);
        int m = INT_MIN;
        dp[0] = 0, dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (i % 2) dp[i] = dp[i / 2] + dp[i / 2 + 1];
            else dp[i] = dp[i / 2];
            m = max(dp[i], m);
        }
        return m;
    }
};