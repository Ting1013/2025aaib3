// Week04-5.cpp
// LeetCode �ǲ߭p�e��7�D 66. Plus One

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // �}�C���סA��K�˹L�Ӷ]�j��

        // �q�̫�@�쩹�e�ˬd
        for (int i = N - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0; // �i��A�o�@���k�s
            } else {
                digits[i]++;   // �S���i�� �� +1 �N����
                return digits; // �����^��
            }
        }

        // �p�G�������O 9�A�Ҧp 9,9,9 �� 1,0,0,0
        digits.insert(digits.begin(), 1); // �b�̫e�����J 1
        return digits;
    }
};
