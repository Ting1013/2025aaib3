// week14-3.cpp  學習計畫 Linked List 第2題 (另一種寫法)
// LeetCode 206. Reverse Linked List

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        vector<int> a; // 伸縮自如的陣列

        while (head != nullptr) {       // 把 Linked List 值逐一放進 vector
            a.push_back(head->val);
            head = head->next;
        }

        ListNode* ans = new ListNode(999); // 用假頭(dummy)掛住答案
        ListNode* now = ans;               // now 是尾端指針，負責接新節點

        for (int i = a.size() - 1; i >= 0; i--) {  // 倒序建立新 Linked List
            now->next = new ListNode(a[i]);
            now = now->next;
        }

        return ans->next; // 真正答案在 dummy->next
    }
};


/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
