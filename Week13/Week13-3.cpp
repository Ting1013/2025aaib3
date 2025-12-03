// Week13-3.cpp
// LeetCode 2. Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // 虛擬頭節點
        ListNode* curr = dummy;            // 移動指標
        int carry = 0;                      // 進位初始值

        while (l1 != nullptr || l2 != nullptr) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            curr->next = new ListNode(sum % 10); // 接上新的節點
            curr = curr->next;
            carry = sum / 10;                    // 更新進位
        }

        if (carry > 0) {
            curr->next = new ListNode(carry);   // 處理最高位進位
        }

        return dummy->next; // 回傳真正的答案節點
    }
};
