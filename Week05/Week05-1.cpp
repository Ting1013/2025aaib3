// week05-1.cpp
// LeetCode �ǲ��D Built-in Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);  // ��r��� iostream �� cin �ӥ�
        string word;  // �r��
        // ss >> word; // �o�ˬO cin >> word�A�{�b�� ss �i�H�� ss >> word
        // ss >> word; // Ū�ĤG���A�|Ū���2�Ӧr
        while (ss >> word) {  // �@��Ū�AŪ��̫�
            // �z������Ƴ��S����
        }
        cout << word;  // �����@�ӹ���A��Ū���
        return word.length();  // �̫�A����װe�X�h
    }
};
