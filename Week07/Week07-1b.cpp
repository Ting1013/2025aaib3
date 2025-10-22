/// week07-1b.cpp �G�X�@
/// TAICA NYCU ��߶�����q�j�ǹq���t ������ ��6�D
/// Input: 1-9 ���Ʀr
/// Output: ¶��骺��� (�P�߼Ʀr���)
/// �Ҧp��J 3�G
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3
/// Input 2 �� 3 �h��, Input 3 �� 5 �h��, Input 4 �� 7 �h��, Input 5 �� 9 �h��

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Step 1�G��J n

    int size = 2 * n - 1; // �`�@�� (2n-1) �h

    // Step 2~5�G�_�� for �j��e�X���
    for (int i = 0; i < size; i++) {        // �~�h�G����ĴX�u�ӡv�]�C�^
        for (int j = 0; j < size; j++) {    // ���h�G����C�@�C���u��l�v�]��^

            if (j > 0) cout << " "; // ��l���ťաA�קK�Ʀr�H�b�@�_

            // �p�⦹����������ɳ̪�]�N��ĴX�h�ӡ^
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int layer = min(min(top, bottom), min(left, right));

            // �V�~�h�Ʀr�V�j
            cout << n - layer;
        }
        cout << "\n"; // �C�C�����n����
    }

    return 0;
}

