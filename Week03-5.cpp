// Week03-5.cpp
// LeetCode �ǲ߭p�e ��9�D
// Arithmetic Progression From Sequence
// �P�_�Ƨǫ᪺�}�C�O�_�����t�ƦC

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());       // ��}�C�q�p��j�Ʀn
        int d = arr[1] - arr[0];            // �p�⤽�t
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] != d)   // �p�G���@��t�Ȥ����󤽮t
                return false;               // ���O���t�ƦC
        }
        return true;                        // �����t�Ȭ۵� �� ���t�ƦC
    }
};
