// Week04-4.cpp
// LeetCode �ǲ߭p�e��10�D 896. Monotonic Array
// �D�N�G�u���\�u��ջ��W�v�Ρu��ջ���v�A����P�ɦ��W����C

#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0;
        // up=1 �N���u�W�[�v�Adown=1 �N���u��֡v

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] < nums[i]) up = 1;     // �o�{���W
            if (nums[i-1] > nums[i]) down = 1;   // �o�{����
        }

        if (up == 1 && down == 1) return false;  // �P�ɦ��W�� �� ���O���
        return true; // ��l���p�G��ջ��W or ��ջ��� or ���۵�
    }
};
