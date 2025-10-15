// week06-4.cpp 昨天的 LeetCode 簡單題
// LeetCode 3349. 相鄰遞增子數組偵測 I
// 題意：nums 陣列中，檢查是否存在兩個相鄰長度為 k 的子陣列，且它們都是遞增的。

# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int N = nums.size();                // 陣列大小
        vector<int> combo(N, 1);            // combo[i] 表示以 nums[i] 結尾的連續遞增長度

        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i])
                combo[i] = combo[i - 1] + 1;
        }

        // 檢查是否有兩個相鄰、且都長度 >= k 的遞增區段
        for (int i = 0; i + k < N; i++) {
            if (combo[i] >= k && combo[i + k] >= k)
                return true;
        }

        return false;
    }
};
