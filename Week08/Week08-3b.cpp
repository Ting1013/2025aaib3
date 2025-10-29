// week08-3b.cpp LeetCode 學習計畫 Simulation
// 1275. 在井字棋遊戲中尋找獲勝者
// 判斷勝負

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};     // 3x3 初始盤面
        int now = 1;           // 玩家 A = 1, 玩家 B = 2
        int winner = 0;        // 0 = 尚未決定, 1 = A, 2 = B

        for (vector<int> move : moves) {
            int i = move[0];
            int j = move[1];

            a[i][j] = now;     // 將棋子放到盤面

            // 判斷橫向
            if (a[i][0] == now && a[i][1] == now && a[i][2] == now)
                winner = now;

            // 判斷縱向
            if (a[0][j] == now && a[1][j] == now && a[2][j] == now)
                winner = now;

            // 判斷左上到右下斜線
            if (a[0][0] == now && a[1][1] == now && a[2][2] == now)
                winner = now;

            // 判斷右上到左下斜線
            if (a[0][2] == now && a[1][1] == now && a[2][0] == now)
                winner = now;

            // 換下一位玩家
            now = (now == 1) ? 2 : 1;
        }

        // 回傳結果
        if (winner == 1) return "A";
        else if (winner == 2) return "B";
        else if (moves.size() == 9) return "Draw";  // 全部下完平手
        else return "Pending";                       // 還沒下完
    }
};
