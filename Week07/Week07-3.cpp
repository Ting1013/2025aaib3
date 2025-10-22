// week07-3.cpp LeetCode �ǲ߭p�e Simulation ��1�D
// 682. Baseball Game �p���I��

# include <iostream>
# include <vector>
# include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;  // �Ψ��x�s���ưO��

        for (string op : operations) { // �v�@Ū���C�Ӿާ@
            if (op == "C") {
                // �R���̫�@�Ӥ���
                a.pop_back();
            } else if (op == "D") {
                // �N�̫�@�Ӥ��ƭ�2��[�W
                a.push_back(a.back() * 2);
            } else if (op == "+") {
                // �N�̫��Ӥ��ƥ[�_�ӡA�A�[��̫�
                int temp1 = a.back(); a.pop_back();
                int temp2 = a.back();
                a.push_back(temp1);
                a.push_back(temp1 + temp2);
            } else {
                // �N�r���ন��ƫ�[�J
                a.push_back(stoi(op));
            }
        }

        // �p���`��
        int ans = 0;
        for (int now : a) ans += now;
        return ans;
    }
};
