// week03-2a.cpp
// SOIT106_ADVANCE_007 C

#include <stdio.h>

int main() {
    char a[5];    // 存放 4 位數字字串 (最後要有 '\0')
    int bad = 0;

    scanf("%s", a);

    for (int i = 0; i < 4; i++) {
        if (a[i] != a[4 - 1 - i]) {
            bad = 1;  // 如果有對應的數字不同，就不是迴文
        }
    }

    if (bad == 1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
