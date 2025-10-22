// week07-2.cpp
// LeetCode �ǲ߭p�e Simulation ��2�D
// 657. Robot Return to Origin ���������H����
// 'U' �W�B'D' �U�B'L' ���B'R' �k

# include <iostream>
# include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // �_�l��m (0,0)

        for (char c : moves) { // �ϥνd�� for �j��
            if (c == 'U') y++;       // �V�W
            else if (c == 'D') y--;  // �V�U
            else if (c == 'L') x--;  // �V��
            else if (c == 'R') x++;  // �V�k
        }

        return (x == 0 && y == 0); // �Y�^����I�^�� true
    }
};
