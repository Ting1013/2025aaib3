// week03-3b.cpp
// LeetCode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
// ���|�z���A�]���u�l�ܡu�Ÿ��v

# include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;  // 1 �N���A-1 �N��t�A0 �N���s
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) ans *= +1;   // ���ơA����
            if (nums[i] < 0) ans *= -1;   // �t�ơA½��Ÿ�
            if (nums[i] == 0) ans = 0;    // �J�� 0�A��ӭ��n���w�O 0
        }
        return ans;
    }
};
