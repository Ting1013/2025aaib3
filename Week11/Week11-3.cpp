// week11-3.cpp 學習計畫 Math 題：Add Binary (LeetCode 67)

class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        vector<int> ans;

        while (i >= 0 || j >= 0) {
            int now = carry;

            if (i >= 0) {
                now += a[i] - '0';
                i--;
            }

            if (j >= 0) {
                now += b[j] - '0';
                j--;
            }

            ans.push_back(now % 2);  // 保存最低位
            carry = now / 2;         // 更新 carry
        }

        if (carry > 0) ans.push_back(carry);

        // 將 vector 裡的反向結果轉成字串
        string strAns;
        for (int k = ans.size() - 1; k >= 0; k--) {
            strAns += char(ans[k] + '0');
        }

        return strAns;
    }
};

