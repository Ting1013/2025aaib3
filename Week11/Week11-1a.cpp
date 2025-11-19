// week11-1a.cpp 挑戰題 二合一,先用(笨方法)寫一次
// LeetCode 2154. 不斷將找到的值乘以 2

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        while (1) {                // 一直找 original
            int found = 0;         // 是否找到

            // 看 original 是否存在於陣列 nums 裡
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == original)
                    found = 1;
            }

            if (found == 0)
                break;             // 沒找到 -> 結果就是 original
            else
                original = original * 2;  // 有找到 -> original * 2 再繼續
        }

        return original;
    }
};
S
