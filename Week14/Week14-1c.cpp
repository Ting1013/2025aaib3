// Week14-1c.cpp
// SOIT106_ADVANCE_009
// 非常好！f(n)

#include <iostream>
using namespace std;

void f(int n) {
    if (n == 0) return;      // 終止條件
    cout << n % 10;          // 印出最低位數
    f(n / 10);               // 遞迴
}

int main() {
    int n;
    cin >> n;

    if (n == 0) cout << 0;   // 特別處理 n = 0
    else f(n);

    cout << "\n";
    return 0;
}
