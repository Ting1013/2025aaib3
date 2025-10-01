// Week04-6.cpp
// CPE UVA100 3n + 1

#include <iostream>
#include <cstdio>   // ���F�ϥ� printf
using namespace std;

int main() {
    int a, b, a2, b2;

    // UVA100 �D�حn�DŪ�� EOF
    while (cin >> a >> b) {
        int ans = 0;

        // ���M�w�d�� (�p���� a2�A�j���� b2)
        if (a < b) {
            a2 = a; b2 = b;
        } else {
            a2 = b; b2 = a;
        }

        // �T�| a2 �� b2
        for (int i = a2; i <= b2; i++) {
            int now = 1; // �O���`������
            int n = i;

            // ���� 3n+1 �L�{
            while (n != 1) {
                if (n % 2 == 1) n = 3 * n + 1;
                else n = n / 2;
                now++;
            }

            if (now > ans) ans = now; // ��s�̤j����
        }

        // �D�حn�D�L�u��l��J�v+�u�̤j�`�����סv
        printf("%d %d %d\n", a, b, ans);
    }
    return 0;
}
