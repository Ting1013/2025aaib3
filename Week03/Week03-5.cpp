// Week03-5.cpp
// LeetCode 厩策璸礶 材9肈
// Arithmetic Progression From Sequence
// 耞逼皚琌单畉计

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());       // р皚眖逼
        int d = arr[1] - arr[0];            // 璸衡そ畉
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] != d)   // 狦Τ癸畉ぃ单そ畉
                return false;               // ぃ琌单畉计
        }
        return true;                        // 场畉单 △ 单畉计
    }
};
