// week11-1b.cpp 挑戰題：聰明的方法，用 set 當 HashSet
// LeetCode 2154. Keep Multiplying Found Values by Two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        set<int> numsSet;                 // C++ 的 set，可當 HashSet 用

        // 使用 range-based for 將所有數字放入 set
        for (int num : nums) {
            numsSet.insert(num);
        }

        // 如果 original 在 set 裡，就一直 *2
        while (numsSet.find(original) != numsSet.end()) {
            original = original * 2;
        }

        return original;
    }
};
