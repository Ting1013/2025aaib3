# week01-2.py LeetCode學習計畫 Python 版本1 for迴圈
# 28. Find the Index of the First Occurrence in a String

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:



        H = len(haystack)  # 主字串長度
        N = len(needle)    # 子字串長度
        # sadbutsad
        # sad i:0
        # sad i:1
        # ....
        #       sad i:6
        for i in range(H - N + 1):
            if haystack[i:i+N] == needle:
                return i

        return -1
