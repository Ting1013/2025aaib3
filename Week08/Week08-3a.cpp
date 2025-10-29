// week08-3a.cpp LeetCode �ǲ߭p�e Simulation
// 1275. �b���r�ѹC�����M����Ӫ�
// 3x3 �}�C�������r�C���A�L�X�C�@�B�L��

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // �p����G�L�X 3x3 �L��
    void myPrint(int a[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    // �������r�ѹC���Amoves �N���a�����ʨB�J
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};  // ��l�� 3x3 �}�C�A�w�]�� 0
        int now = 1;        // ���a A = 1, ���a B = 2

        // �v�@�B�z�C�@�B
        for (vector<int> move : moves) {
            int i = move[0];
            int j = move[1];
            a[i][j] = now;   // �N���a�Ѥl���L���W

            myPrint(a);      // �L�X�ثe�L��

            // ���U�@�쪱�a
            now = (now == 1) ? 2 : 1;
        }

        return "A"; // ���H�K return�A�P�_�ӭt�b week08-3b.cpp �B�z
    }
};
