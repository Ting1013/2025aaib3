//Week12-3.cpp
//976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end()); // 排序(小到大)

        // 因為最大周長的三角形會由最大的三支構成，
        // 所以從尾端往前找第一組符合 a + b > c 的三角形
        for (int i = nums.size() - 1; i >= 2; i--) {
            int a = nums[i], b = nums[i-1], c = nums[i-2];
            if (b + c > a) return a + b + c;  // 找到馬上回傳
        }

        return 0; // 找不到三角形就回傳 0
    }
};
