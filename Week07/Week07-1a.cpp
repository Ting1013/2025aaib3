/// week07-1a.cpp
/// TAICA NYCU ��߶�����q�j�ǹq���t�����Ҳ�6�D
/// Input: 1-9 ���Ʀr Output: ¶��骺��Ρ]�ثe���b���~�^
/// �Ҧp��J�G3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@ 5 �h��

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // �B�J01�G��J

    for (int i = 1; i < 2 * n; i++) { // Step03: for �j��, �Ӽh
        for (int j = 1; j < 2 * n; j++) { // �ĴX��
            if (j > 1) cout << " "; // Step05: �����Y + ���[
            cout << n; // ���æL�Ʀr (�N�|�)
        }
        cout << " �{�b�O�� " << i << " ��"; // Step04: �Ӽh�N�[ (�N�|�)
        cout << endl; // Step02: Output, ����
    }

    return 0;
}
