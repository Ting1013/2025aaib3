// week08-3b.cpp LeetCode �ǲ߭p�e Simulation
// 1275. �b���r�ѹC�����M����Ӫ�
// �P�_�ӭt

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};     // 3x3 ��l�L��
        int now = 1;           // ���a A = 1, ���a B = 2
        int winner = 0;        // 0 = �|���M�w, 1 = A, 2 = B

        for (vector<int> move : moves) {
            int i = move[0];
            int j = move[1];

            a[i][j] = now;     // �N�Ѥl���L��

            // �P�_��V
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now)
                winner = now;

            // �P�_�a�V
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now)
                winner = now;

            // �P�_���W��k�U�׽u
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now)
                winner = now;

            // �P�_�k�W�쥪�U�׽u
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now)
                winner = now;

            // ���U�@�쪱�a
            now = (now == 1) ? 2 : 1;
        }

        // �^�ǵ��G
        if (winner == 1) return "A";
        else if (winner == 2) return "B";
        else if (moves.size() == 9) return "Draw";  // �����U������
        else return "Pending";                       // �٨S�U��
    }
};
