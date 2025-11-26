//Week12-4.cpp
//43. Multiply Strings

class Solution {
public:
    string multiply(string num1, string num2) {

        // 若其中一個是 "0"，答案一定是 "0"
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        vector<int> ans(n + m, 0);  // 結果最大長度 n + m

        // 從最低位開始相乘（手算乘法）
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = ans[i + j + 1] + mul;

                ans[i + j + 1] = sum % 10;      // 個位放這裡
                ans[i + j] += sum / 10;         // 進位放前一格
            }
        }

        // 把 vector<int> 轉成字串
        string result = "";
        int i = 0;

        // 跳過前導 0
        while (i < ans.size() && ans[i] == 0) i++;

        for (; i < ans.size(); i++)
            result += (ans[i] + '0');

        return result;
    }
};
