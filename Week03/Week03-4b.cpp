// week03-4b.cpp 第2種寫法
// LeetCode 學習計畫第6題 283. Move Zeroes


# include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; // 下一個要放非零數字的位置

        // 先搬移所有非零數字
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }

        // 將剩下位置全部補零
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
