// Week15-3.cpp 學習計畫 Basic 第5題，超難、很難想到解法
// LeetCode 459. 重複子字串模式

#include <string>
using namespace std;

class Solution {
public:

    bool repeatedSubstringPattern(string s) {

        // 解法卻很簡單（程式碼很短）
        // 把 s+s 的頭、尾，各扣 1 個字母
        // 再找找看裡面有沒有 s 本身

        string s2 = s + s;                       // 兩倍的長度
        string s3 = s2.substr(1, s2.length() - 2); // 去掉頭尾

        // find 找不到會回傳 string::npos
        // 所以「不是 npos」就代表「有找到」
        return s3.find(s) != string::npos;

        // 老師其實寫不出這一題，因為用到很多進階的觀念、技巧、函式
    }
};
