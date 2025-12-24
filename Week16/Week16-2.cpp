// week16-2.cpp 學習計畫 Binary Tree (隱藏題)第2題(Moodle有連結)

// LeetCode 111. Minimum Depth of Binary Tree 找到最短的葉子

class Solution {

public: // 預設的答案非常大,我們如果有更小的,就更新更小的

    int ans = 99999; // 放答案的變數,在外面,大家都可以改它

    void helper(TreeNode* root, int level) { // 發明函式「函式呼叫函式」來解題

        if (root->left == nullptr && root->right == nullptr) { // 葉子
            if (level < ans) ans = level; // 更小的答案(終止條件:左右都沒小腳腳)
            return;
        }

        if (root->left != nullptr)
            helper(root->left, level + 1);

        if (root->right != nullptr)
            helper(root->right, level + 1);
    }

    int minDepth(TreeNode* root) {

        if (root == nullptr) return 0; // 什麼都沒有,不用算,直接

        helper(root, 1); // 請 helper()幫我們找答案

        return ans;
    }
};
week16-1.cpp
