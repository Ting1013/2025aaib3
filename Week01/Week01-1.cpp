///Leetcode 學習計畫 大海撈針 在haystack找到needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///要用迴圈 把所有可能的位置 都找一遍
        //ex:sadbutsad 很難過 要找 sad
        //i:0 sad 把 haytack 剪前面N個字母
        //    sad
        //i:1 sad
        //    abd
        //i:2 sad
        //    dbu
        int H = haystack.length(),N = needle.length();
        for(int i = 0;i <= H - N;i++){
            if(haystack.substr(i,N)== needle)return i;
        }
        return -1;
    }
};
