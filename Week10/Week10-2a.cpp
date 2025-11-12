// week10-2a.cpp
// LeetCode 1523. 計算區間內的奇數個數 (先寫錯的版本，用 for 迴圈暴力解)

#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for (int i = low; i <= high; i++) {
            if (i % 2 == 1) ans++;
        }
        return ans;
    }
};
