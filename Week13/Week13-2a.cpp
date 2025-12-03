// Week13-2a.cpp 學習計畫 Linked List 第1題
// LeetCode 21. 合併兩個已排序列表

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // 建立一個假的頭(dummy node)
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;   // now 負責串接新的節點

        // 當兩個 list 都不是空的時候才比較
        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                now->next = list1;   // 把 list1 接到結果後面
                list1 = list1->next; // list1 前進
            } else {
                now->next = list2;   // 把 list2 接到結果後面
                list2 = list2->next; // list2 前進
            }

            now = now->next;         // now 也往後移動
        }

        // 其中一邊先結束 → 另一邊剩餘的直接接上
        if (list1 != nullptr) now->next = list1;
        if (list2 != nullptr) now->next = list2;

        // ans->next 才是真正的頭
        return ans->next;
    }
};
