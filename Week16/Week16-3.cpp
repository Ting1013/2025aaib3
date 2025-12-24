// week16-3.cpp 學習計畫 Binary Tree 最後1題

// LeetCode 226. Invert Binary Tree 左右對調

class Solution {

public:

    // 已經有個函式,寫好它,就可「函式呼叫函式」
    TreeNode* invertTree(TreeNode* root) {

        if (root == nullptr) return root; // 終止條件

        TreeNode* left  = invertTree(root->left);  // 處理左邊的樹
        TreeNode* right = invertTree(root->right); // 處理右邊的樹

        root->left  = right; // 將右邊放左邊
        root->right = left;  // 將左邊放右邊

        return root;
    }
};
