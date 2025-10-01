// Week04-5.cpp
// LeetCode 學習計畫第7題 66. Plus One

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // 陣列長度，方便倒過來跑迴圈

        // 從最後一位往前檢查
        for (int i = N - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0; // 進位，這一位歸零
            } else {
                digits[i]++;   // 沒有進位 → +1 就完成
                return digits; // 直接回傳
            }
        }

        // 如果全部都是 9，例如 9,9,9 → 1,0,0,0
        digits.insert(digits.begin(), 1); // 在最前面插入 1
        return digits;
    }
};
