// week03-4a.cpp 第1種寫法
// LeetCode 學習計畫第6題 283. Move Zeroes

# include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;  // 暫存非零數字

        // 先把非零數字存到 ans
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) ans.push_back(nums[i]);
        }

        // 再把 ans 放回 nums，剩下補零
        for (int i = 0; i < nums.size(); i++) {
            if (i < ans.size()) nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
