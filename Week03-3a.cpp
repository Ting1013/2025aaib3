// week03-3a.cpp
// LeetCode 學習計畫第8題 1822. Sign of the Product of an Array
// 這樣會爆掉，因為數字乘一堆會超過 int 範圍

# include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;  // 用來累乘
        for (int i = 0; i < nums.size(); i++) {
            ans *= nums[i];  // 如果數字很多或很大，會 overflow
        }

        if (ans > 0) return 1;
        if (ans < 0) return -1;
        return 0;
    }
};
