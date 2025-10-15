// week06-5.cpp
// LeetCode 3350. �۾F���W�l�Ʋհ��� II
// �D�N�G��X�̤j�i�઺ k�A�ϱo�s�b��Ӭ۾F���׬� k �����W�l�}�C�C

# include <iostream>
# include <vector>
# include <algorithm> // for min()
using namespace std;

class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();               // �}�C�j�p
        vector<int> left(N, 1);            // ����k�� combo
        vector<int> right(N, 1);           // �k�쥪�� combo

        // �q����k�p�⻼�W����
        for (int i = 1; i < N; i++) {
            if (nums[i - 1] < nums[i])
                left[i] = left[i - 1] + 1;
        }

        // �q�k�쥪�p�⻼�W����
        for (int i = N - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1])
                right[i] = right[i + 1] + 1;
        }

        int ans = 0;
        // ���ճs������P�k��۾F�����W�l�}�C
        for (int i = 0; i < N - 1; i++) {
            int now = min(left[i], right[i + 1]); // ���k����ੵ�򪺳̤p����
            ans = max(ans, now);
        }

        return ans;
    }
};
