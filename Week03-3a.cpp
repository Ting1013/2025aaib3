// week03-3a.cpp
// LeetCode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
// �o�˷|�z���A�]���Ʀr���@��|�W�L int �d��

# include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;  // �ΨӲ֭�
        for (int i = 0; i < nums.size(); i++) {
            ans *= nums[i];  // �p�G�Ʀr�ܦh�Ϋܤj�A�| overflow
        }

        if (ans > 0) return 1;
        if (ans < 0) return -1;
        return 0;
    }
};
