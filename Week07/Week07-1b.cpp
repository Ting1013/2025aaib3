/// week07-1b.cpp 二合一
/// TAICA NYCU 國立陽明交通大學電機系 期中考 第6題
/// Input: 1-9 的數字
/// Output: 繞圈圈的方形 (同心數字方形)
/// 例如輸入 3：
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3
/// Input 2 有 3 層樓, Input 3 有 5 層樓, Input 4 有 7 層樓, Input 5 有 9 層樓

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Step 1：輸入 n

    int size = 2 * n - 1; // 總共有 (2n-1) 層

    // Step 2~5：巢狀 for 迴圈畫出方形
    for (int i = 0; i < size; i++) {        // 外層：控制第幾「樓」（列）
        for (int j = 0; j < size; j++) {    // 內層：控制每一列的「格子」（行）

            if (j > 0) cout << " "; // 格子間空白，避免數字黏在一起

            // 計算此格離哪個邊界最近（代表第幾層樓）
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = min(min(top, bottom), min(left, right));

            // 越外層數字越大
            cout << n - layer;
        }
        cout << "\n"; // 每列結束要換行
    }

    return 0;
}

