// week02-4.cpp LeetCode學習計畫第2題
// 389. Find the Difference 找到2個字串「差哪個字母」

class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; // 可以用桶子來裝字母，右邊的大括號代表「一開始空的」

        // 將 s 的字母放入桶子
        for(int i = 0; i < s.length(); i++) {
            char c = s[i]; // 取出字母
            A[c]++;        // 把字母放入桶子裡
        }

        // 從桶子中減掉 t 的字母
        for(int i = 0; i < t.length(); i++) {
            char c = t[i]; // 取出字母
            A[c]--;        // 從桶子裡拿出字母
            if(A[c] < 0) return c; // 拿光光、變負的，代表缺這個字母
        }

        return 0; // 不會用到這一行
    }
};
