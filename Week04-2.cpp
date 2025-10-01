/// week04-2.cpp
/// ��h�� vector<int> a ����l��(�̭��n�񤰻��)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(3);        // ��l���� 3�A�̭����� 0
    vector<int> b(3, 88);    // ��l���� 3�A�̭����� 88

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0}; // C�y���}�C

    vector<int> d(c, c + 3); // �q c[0] �}�l�A�� c+3 ���� => ���e�T��
    for (int i = 0; i < d.size(); i++) cout << d[i] << " ";
    cout << "\n�o�O�� C �}�C���U�A���� C++ vector ��l�Ƥ@���\n\n";

    vector<int> e(c, c + 10); // �q c[0] �}�l�A�� c+10 ���� => ������ 10 ��
    for (int i = 0; i < e.size(); i++) cout << e[i] << " ";
    cout << "\n�o�]�O�� C �}�C���U�A���� C++ vector ��l�Ƥ@���\n\n";

    return 0;
}
