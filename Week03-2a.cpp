// week03-2a.cpp
// SOIT106_ADVANCE_007 C

#include <stdio.h>

int main() {
    char a[5];    // �s�� 4 ��Ʀr�r�� (�̫�n�� '\0')
    int bad = 0;

    scanf("%s", a);

    for (int i = 0; i < 4; i++) {
        if (a[i] != a[4 - 1 - i]) {
            bad = 1;  // �p�G���������Ʀr���P�A�N���O�j��
        }
    }

    if (bad == 1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
