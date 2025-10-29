// week08-3a.cpp LeetCode 學習計畫 Simulation
// 1275. 在井字棋遊戲中尋找獲勝者
// 3x3 陣列模擬井字遊戲，印出每一步盤面

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // 小幫手：印出 3x3 盤面
    void myPrint(int a[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    // 模擬井字棋遊戲，moves 代表玩家的移動步驟
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};  // 初始化 3x3 陣列，預設值 0
        int now = 1;        // 玩家 A = 1, 玩家 B = 2

        // 逐一處理每一步
        for (vector<int> move : moves) {
            int i = move[0];
            int j = move[1];
            a[i][j] = now;   // 將玩家棋子放到盤面上

            myPrint(a);      // 印出目前盤面

            // 換下一位玩家
            now = (now == 1) ? 2 : 1;
        }

        return "A"; // 先隨便 return，判斷勝負在 week08-3b.cpp 處理
    }
};
