// week03-4b.cpp ��2�ؼg�k
// LeetCode �ǲ߭p�e��6�D 283. Move Zeroes


# include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; // �U�@�ӭn��D�s�Ʀr����m

        // ���h���Ҧ��D�s�Ʀr
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }

        // �N�ѤU��m�����ɹs
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
