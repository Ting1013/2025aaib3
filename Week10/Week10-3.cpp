// week10-3.cpp
// LeetCode 54. 螺旋矩陣 (使用牆壁技巧，撞到牆就轉向)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top = 0, bottom = M - 1, left = 0, right = N - 1; // 上下左右邊界
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // 從左到右
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++; // 收縮上邊界

            // 從上到下
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--; // 收縮右邊界

            // 檢查是否仍在範圍內
            if (!(top <= bottom && left <= right)) break;

            // 從右到左
            for (int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--; // 收縮下邊界

            // 從下到上
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++; // 收縮左邊界
        }

        return ans;
    }
};
