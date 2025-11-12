// week10-2b.cpp
// LeetCode 1523. 計算區間範圍內的奇數個數 (用數學方式解)

#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low) / 2;        // 大約有一半是奇數
        if (low % 2 == 1 || high % 2 == 1) // 端點有奇數就多一個
            ans++;
        return ans;
    }
};
