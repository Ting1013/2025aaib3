//Week13-4.cpp
//--- Day 1: Secret Entrance ---

# include <iostream>
using namespace std;

int main() {
    char c;   // L 或 R
    int d;    // 點擊數
    int now = 50;    // 初始位置
    int count0 = 0;  // 指向 0 的次數

    while (cin >> c >> d) {
        if (c == 'L') {
            now -= d;
        } else if (c == 'R') {
            now += d;
        }
        // 讓 now 保持在 0~99
        now = (now + 100) % 100;

        // 如果旋轉後指向 0，就計數
        if (now == 0) count0++;
    }

    cout << "密碼是: " << count0 << "\n";
}
