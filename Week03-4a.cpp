// week03-4a.cpp ��1�ؼg�k
// LeetCode �ǲ߭p�e��6�D 283. Move Zeroes

# include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;  // �Ȧs�D�s�Ʀr

        // ����D�s�Ʀr�s�� ans
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) ans.push_back(nums[i]);
        }

        // �A�� ans ��^ nums�A�ѤU�ɹs
        for (int i = 0; i < nums.size(); i++) {
            if (i < ans.size()) nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
