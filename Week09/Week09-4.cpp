// week09-4.cpp
// LeetCode 54. 螺旋矩陣
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        if (M == 0) return {};
        int N = matrix[0].size();

        int top = 0, bottom = M - 1, left = 0, right = N - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // 往右走 (top row)
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;
            if (top > bottom) break;

            // 往下走 (right column)
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;
            if (left > right) break;

            // 往左走 (bottom row)
            for (int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--;
            if (top > bottom) break;

            // 往上走 (left column)
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
            if (left > right) break;
        }

        return ans;
    }
};
