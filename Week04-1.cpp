/// ��4�g-1.CPP
/// �Ʋ� C++ ���Y�ۦp���}�C vector<int> a

#include <iostream>
#include <vector>   // �쥻�g�� <�V�q>�A�n�令 <vector>
using namespace std;

int main() {
    vector<int> a;
    /// �W�g�йL�u���Y�ۦp�v���}�C�S���u��l�ơv�j�p
    cout << "�S���u��l�ơva�����׬O " << a.size() << endl; // �@�}�l�j�p�O0

    a.push_back(99); // �쥻�g�� a.���^�A�n�令 push_back
    cout << "�g�L .push_back(99) �� a �������� " << a.size() << endl;

    vector<int> b(3); // �إߪ���3�� vector�A�̭���l�ȳ��O 0
    cout << "b �����׬O " << b.size() << endl;

    b.push_back(99); // �̫�A�[�@�� 99
    for (int i = 0; i < b.size(); i++) cout << b[i] << ' '; // �L�X 0 0 0 99
    cout << endl;
    cout << "�g�L .push_back(99) �� b �ܪ��F" << endl;

    vector<int> c(3, 88); // ����3�A�C�Ӥ������O88
    for (int i = 0; i < c.size(); i++) cout << c[i] << ' '; // �L�X 88 88 88
    cout << endl;
    cout << "��l�� (3,88) �N�|�O�T��88" << endl;

    return 0;
}
