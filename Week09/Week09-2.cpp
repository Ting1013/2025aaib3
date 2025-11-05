//Week09-2.cpp
//73. Set Matrix Zeroes

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        vector<bool> markI(M, false), markJ(N, false); // 標記要清零的行與列

        // 第1步：標記所有 0 的位置
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) {
                    markI[i] = true;  // 標記行
                    markJ[j] = true;  // 標記列
                }
            }
        }

        // 第2步：將標記的行列設為 0
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (markI[i] || markJ[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
