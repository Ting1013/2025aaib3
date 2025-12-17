// Week15-5.cpp 學習計畫 Binary Tree 第1題(隱藏關卡)
// LeetCode 104. Maximum Depth of Binary Tree

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;   // 終止條件：空樹

        int left = maxDepth(root->left);   // 函式呼叫函式（左）
        int right = maxDepth(root->right); // 函式呼叫函式（右）

        return max(left, right) + 1;       // 回傳最大深度
    }
};
