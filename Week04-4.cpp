// Week04-4.cpp
// LeetCode 學習計畫第10題 896. Monotonic Array
// 題意：只允許「單調遞增」或「單調遞減」，不能同時有增有減。

#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0;
        // up=1 代表有「增加」，down=1 代表有「減少」

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] < nums[i]) up = 1;     // 發現遞增
            if (nums[i-1] > nums[i]) down = 1;   // 發現遞減
        }

        if (up == 1 && down == 1) return false;  // 同時有增減 → 不是單調
        return true; // 其餘情況：單調遞增 or 單調遞減 or 全相等
    }
};
