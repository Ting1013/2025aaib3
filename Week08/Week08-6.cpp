//Week08-6.cpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "�п�J4���(�Ʀr���୫��): ";
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {  // ���ƭp��̦h 7 ��
        vector<int> a;
        for (int i = 0; i < 4; i++)
        {
            a.push_back(n % 10);  // ���X�C�Ӧ��
            n = n/10 ;
        }

        // �Ѥp��j�Ƨ�
        sort(a.begin(), a.end());

        // �̤j��
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];

        // �̤p��
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];

        n = M - m;

        printf("%d-%d=%d\n", M, m, n); // ��ܭp��L�{�A��0��4���
    }
}
