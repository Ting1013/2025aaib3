// Week04-6.cpp
// CPE UVA100 3n + 1

#include <iostream>
#include <cstdio>   // 為了使用 printf
using namespace std;

int main() {
    int a, b, a2, b2;

    // UVA100 題目要求讀到 EOF
    while (cin >> a >> b) {
        int ans = 0;

        // 先決定範圍 (小的放 a2，大的放 b2)
        if (a < b) {
            a2 = a; b2 = b;
        } else {
            a2 = b; b2 = a;
        }

        // 枚舉 a2 到 b2
        for (int i = a2; i <= b2; i++) {
            int now = 1; // 記錄循環長度
            int n = i;

            // 模擬 3n+1 過程
            while (n != 1) {
                if (n % 2 == 1) n = 3 * n + 1;
                else n = n / 2;
                now++;
            }

            if (now > ans) ans = now; // 更新最大長度
        }

        // 題目要求印「原始輸入」+「最大循環長度」
        printf("%d %d %d\n", a, b, ans);
    }
    return 0;
}
