// week05-4a.cpp
// SOIT107_ADVANCE_002
# include <iostream>
using namespace std;

int main()
{
    int now;
    cin >> now;              // ����J�Ĥ@�ӼƦr
    int M = now, m = now;    // �P�ɳ]�w�̤j��(M)�M�̤p��(m)

    for (int i = 1; i < 6; i++) {  // ���ۦAŪ 5 ���]�@ 6 �ӼƦr�^
        cin >> now;
        if (now > M) M = now;      // �Y��ثe�̤j���٤j �� ��s�̤j��
        if (now < m) m = now;      // �Y��ثe�̤p���٤p �� ��s�̤p��
    }

    cout << M - m;           // ��X�̤j�ȻP�̤p�Ȫ��t
}
