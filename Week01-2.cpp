# week01-2.py LeetCode�ǲ߭p�e Python ����1 for�j��
# 28. Find the Index of the First Occurrence in a String

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:



        H = len(haystack)  # �D�r�����
        N = len(needle)    # �l�r�����
        # sadbutsad
        # sad i:0
        # sad i:1
        # ....
        #       sad i:6
        for i in range(H - N + 1):
            if haystack[i:i+N] == needle:
                return i

        return -1
