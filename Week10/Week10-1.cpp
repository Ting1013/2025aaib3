// week10-1.cpp
// LeetCode 1572. 矩陣對角線總和
// 左上→右下 (i == j) 與 右上→左下 (i + j == N - 1)

#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0; // 對角線加起來的總和
        int N = mat.size();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j || i + j == N - 1)
                    ans += mat[i][j];
            }
        }

        return ans;
    }
};
