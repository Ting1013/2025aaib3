///Leetcode �ǲ߭p�e �j�����w �bhaystack���needle
///28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�n�ΰj�� ��Ҧ��i�઺��m ����@�M
        //ex:sadbutsad �����L �n�� sad
        //i:0 sad �� haytack �ūe��N�Ӧr��
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
