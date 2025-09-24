/// week03-1.cpp
/// C++ 陣列 vector<int>

#include <iostream>  // cin, cout
#include <vector>    // vector

using namespace std;

int main() {
    cout << "請輸入4個數字:" << endl;

    vector<int> a;  // 「伸縮自如」的陣列
    int now;

    // 先輸入4個數字
    for (int i = 0; i < 4; i++) {
        cin >> now;         // 輸入一個數字
        a.push_back(now);   // 放到 vector 最後面
    }

    // 印出目前陣列的內容
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    cout << "現在程式碼裡,又推入了 99 和 88 兩個數字,結果呢?\n";

    // 再推兩個數字進陣列
    a.push_back(99);
    a.push_back(88);

    // 再印一次，這次有 6 個數字
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
