// Week15-4.cpp 學習計畫 Basic 最後1題
// LeetCode 13. Roman to Integer 正確版本（最穩定）

#include <string>
using namespace std;

class Solution {
public:
    int Table(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int now = Table(s[i]);

            // 看右邊一個字母
            if (i + 1 < s.length() && now < Table(s[i + 1])) {
                ans -= now;   // 倒裝：減
            } else {
                ans += now;   // 正常：加
            }
        }

        return ans;
    }
};
