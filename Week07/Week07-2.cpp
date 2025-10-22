// week07-2.cpp
// LeetCode 學習計畫 Simulation 第2題
// 657. Robot Return to Origin 模擬機器人走路
// 'U' 上、'D' 下、'L' 左、'R' 右

# include <iostream>
# include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // 起始位置 (0,0)

        for (char c : moves) { // 使用範圍型 for 迴圈
            if (c == 'U') y++;       // 向上
            else if (c == 'D') y--;  // 向下
            else if (c == 'L') x--;  // 向左
            else if (c == 'R') x++;  // 向右
        }

        return (x == 0 && y == 0); // 若回到原點回傳 true
    }
};
