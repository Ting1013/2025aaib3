/// week03-1.cpp
/// C++ �}�C vector<int>

#include <iostream>  // cin, cout
#include <vector>    // vector

using namespace std;

int main() {
    cout << "�п�J4�ӼƦr:" << endl;

    vector<int> a;  // �u���Y�ۦp�v���}�C
    int now;

    // ����J4�ӼƦr
    for (int i = 0; i < 4; i++) {
        cin >> now;         // ��J�@�ӼƦr
        a.push_back(now);   // ��� vector �̫᭱
    }

    // �L�X�ثe�}�C�����e
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    cout << "�{�b�{���X��,�S���J�F 99 �M 88 ��ӼƦr,���G�O?\n";

    // �A����ӼƦr�i�}�C
    a.push_back(99);
    a.push_back(88);

    // �A�L�@���A�o���� 6 �ӼƦr
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
