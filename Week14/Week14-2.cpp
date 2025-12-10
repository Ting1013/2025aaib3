// Week14-2.cpp  學習計畫 Linked List 第2題
//206. Reverse Linked List

#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // 終止條件：空串列或只剩一個節點
        if (head == nullptr || head->next == nullptr)
            return head;

        // 反轉右半部
        ListNode* ans = reverseList(head->next);

        // 將 head->next 指回 head（指標反轉）
        head->next->next = head;

        // 將 head->next 清掉避免形成環
        head->next = nullptr;

        return ans;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
