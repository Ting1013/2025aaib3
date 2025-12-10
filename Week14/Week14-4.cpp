//Week14-4.cpp
//445. Add Two Numbers II

class Solution {
public:

    // week14-2：用遞迴反轉 Linked List
    ListNode* myReverse(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* ans = myReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }

    // week13：加總兩個 Linked List（每個 node 儲存一位數）
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {

        ListNode* ans = new ListNode(999);   // dummy node
        ListNode* tail = ans;
        int carry = 0;

        while (list1 != nullptr || list2 != nullptr) {

            int now = carry;

            if (list1 != nullptr) {
                now += list1->val;
                list1 = list1->next;
            }

            if (list2 != nullptr) {
                now += list2->val;
                list2 = list2->next;
            }

            tail->next = new ListNode(now % 10);
            tail = tail->next;
            carry = now / 10;
        }

        if (carry > 0) {
            tail->next = new ListNode(carry);
        }

        return ans->next;
    }

    // LeetCode 445 最終整合
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // 步驟1：先把兩個 list 反過來（因為題目高位在前）
        ListNode* list1 = myReverse(l1);
        ListNode* list2 = myReverse(l2);

        // 步驟2：呼叫 week13 的加法
        ListNode* sumList = myAddTwoNumbers(list1, list2);

        // 步驟3：把結果再反轉回去，符合題目要求（高位在前）
        return myReverse(sumList);
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
