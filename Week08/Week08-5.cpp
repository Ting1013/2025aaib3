//Week08-5.cpp

#include <stdio.h>

int MYPOWER(int A, int B) {
    int result = 1;
    for (int i = 0; i < B; i++) {
        result *= A;   // ¤£Â_­¼¥H A
    }
    return result;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("[%d]", MYPOWER(a, b));
    return 0;
}
