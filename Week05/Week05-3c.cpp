/// week05-3c.cpp �X�X �X�� Part1/Part2 Input/Output
/// Part3: stringstream �_�r
/// Part4: �ϹL�� algorithm
/// CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�

# include <iostream>
# include <sstream>   /// Part 3: ��r��Ψ��_�r
# include <string>
# include <algorithm> /// Part 4: �ϹL�ӡA�n�Ψ� algorithm �t��k
using namespace std;

int main()
{
    string line; /// Part 1: Input
    while (getline(cin, line)) { /// ��J�@��A�@��Ū�� Ctrl+Z �~����
        stringstream ss(line);   /// Part 3: ��r��Ψ��_�r
        string word;             /// �Ψ��_�r

        ss >> word;              /// Part 5: ���ѨM�Ĥ@�Ӧr�]���[�Ů�^
        reverse(word.begin(), word.end());
        cout << word;            /// Part 5: �Ĥ@�Ӧr���Ϋe���Ů�

        while (ss >> word) {     /// Part 3: ��ѤU���r����
            reverse(word.begin(), word.end());
            cout << " " << word; /// Part 4: �᭱���r�e���n���Ů�
        }

        cout << endl;            /// ����
        /// cout << line << endl; /// ���H�K�L�X�ӡ]���եΡ^
    }
}
