// week06-5.cpp
// LeetCode 3350. 相鄰遞增子數組偵測 II
// 題意：找出最大可能的 k，使得存在兩個相鄰長度為 k 的遞增子陣列。

# include <iostream>
# include <vector>
# include <algorithm> // for min()
using namespace std;

class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();               // 陣列大小
        vector<int> left(N, 1);            // 左到右的 combo
        vector<int> right(N, 1);           // 右到左的 combo

        // 從左到右計算遞增長度
        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i])
                left[i] = left[i - 1] + 1;
        }

        // 從右到左計算遞增長度
        for (int i = N - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1])
                right[i] = right[i + 1] + 1;
        }

        int ans = 0;
        // 嘗試連接左邊與右邊相鄰的遞增子陣列
        for (int i = 0; i < N - 1; i++) {
            int now = min(left[i], right[i + 1]); // 左右兩邊能延續的最小長度
            ans = max(ans, now);
        }

        return ans;
    }
};
