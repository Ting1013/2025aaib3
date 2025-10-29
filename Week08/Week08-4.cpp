//Week08-4.cpp

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:�_,1:�F,2:�n,3:��
        int x = 0, y = 0; // ��l��m

        // ���ƨ�4���A�]�������H�̦h�|���`���N�|�^��_�I�ΩT�w��V
        instructions = instructions + instructions + instructions + instructions;

        for (char c : instructions) {
            if (c == 'G') { // �V�e��
                if (d == 0) y++;
                else if (d == 1) x++;
                else if (d == 2) y--;
                else if (d == 3) x--;
            } else if (c == 'R') { // �k��90��
                d = (d + 1) % 4;
            } else if (c == 'L') { // ����90��
                d = (d + 3) % 4; // �۷�� -1 mod 4
            }
        }

        return x == 0 && y == 0; // �O�_�^����I
    }
};
