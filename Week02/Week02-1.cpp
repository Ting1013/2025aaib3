// week02-1.cpp C
// SOIT106  001

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int b = a;    // �ƥ�

    int ans = 0;
    // ����Ʀr
    while (a > 0) {
        ans = ans * 10 + a % 10;
        a = a / 10;
    }

    printf("%d+%d=%d\n", b, ans, b + ans);

    return 0;
}
