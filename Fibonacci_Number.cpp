// 509. Fibonacci Number
// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;

        int* memo = new int[n+1];
        memo[0] = 0; memo[1] = 1;

        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i-1] + memo[i-2];
        }

        return memo[n];
    }
};