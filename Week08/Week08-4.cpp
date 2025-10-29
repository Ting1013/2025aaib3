//Week08-4.cpp

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:北,1:東,2:南,3:西
        int x = 0, y = 0; // 初始位置

        // 重複走4次，因為機器人最多四次循環就會回到起點或固定方向
        instructions = instructions + instructions + instructions + instructions;

        for (char c : instructions) {
            if (c == 'G') { // 向前走
                if (d == 0) y++;
                else if (d == 1) x++;
                else if (d == 2) y--;
                else if (d == 3) x--;
            } else if (c == 'R') { // 右轉90度
                d = (d + 1) % 4;
            } else if (c == 'L') { // 左轉90度
                d = (d + 3) % 4; // 相當於 -1 mod 4
            }
        }

        return x == 0 && y == 0; // 是否回到原點
    }
};
