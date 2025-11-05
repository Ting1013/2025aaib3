//Week09-1.cpp
//1672. Richest Customer Wealth

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size();
        int N = accounts[0].size();
        int ans = 0;

        for (int i = 0; i < M; i++) {
            int now = 0;
            for (int j = 0; j < N; j++) {
                now += accounts[i][j];
            }
            ans = max(ans, now);
        }

        return ans;
    }
};
