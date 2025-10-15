// week06-4.cpp �Q�Ѫ� LeetCode ²���D
// LeetCode 3349. �۾F���W�l�Ʋհ��� I
// �D�N�Gnums �}�C���A�ˬd�O�_�s�b��Ӭ۾F���׬� k ���l�}�C�A�B���̳��O���W���C

# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int N = nums.size();                // �}�C�j�p
        vector<int> combo(N, 1);            // combo[i] ��ܥH nums[i] �������s�򻼼W����

        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i])
                combo[i] = combo[i - 1] + 1;
        }

        // �ˬd�O�_����Ӭ۾F�B�B������ >= k �����W�Ϭq
        for (int i = 0; i + k < N; i++) {
            if (combo[i] >= k && combo[i + k] >= k)
                return true;
        }

        return false;
    }
};
