// week08-1.cpp
// 3370. Smallest Number With All Set Bits
#include <iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int N = 0;
        int temp = n;

        // ��1�B�G�p��G�i�쪺��ơ]��֪k�^
        while (temp > 0) {
            temp /= 2;
            N++;
        }

        cout << "�{�b�o�{�O(�G�i�쪺)" << N << "���\n";

        // ��2�B�G�զX�X�����O1��N���
        int ans = 0;
        for (int i = 0; i < N; i++) {
            ans = ans * 2 + 1;
        }

        return ans;
    }
};
