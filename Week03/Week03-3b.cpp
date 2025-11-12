// week03-3b.cpp
// LeetCode 學習計畫第8題 1822. Sign of the Product of an Array
// 不會爆掉，因為只追蹤「符號」

# include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;  // 1 代表正，-1 代表負，0 代表有零
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) ans *= +1;   // 正數，不變
            if (nums[i] < 0) ans *= -1;   // 負數，翻轉符號
            if (nums[i] == 0) ans = 0;    // 遇到 0，整個乘積必定是 0
        }
        return ans;
    }
};
