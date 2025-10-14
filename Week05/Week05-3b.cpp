/// week05-3b.cpp �X�X �X�� Part1/Part2 Input/Output
/// CPE �o��Ҫ��O UVA 483 Word Scramble ��r�ˤ�
/// Part 3: ��r��Ψ��_�r stringstream
/// Part 4: �ϹL�ӡA�n�Ψ� algorithm �t��k

# include <iostream>
# include <sstream>   /// Part 3: ��r��Ψ��_�r
# include <string>
# include <algorithm> /// Part 4: �ϹL�ӡA�n�Ψ� algorithm �t��k
using namespace std;

int main()
{
    string line;     /// Part 1: Input
    while (getline(cin, line)) { /// ��J�@��A�@����J�� Ctrl+Z ����
        stringstream ss(line);   /// Part 3: ��r��Ψ��_�r
        string word;             /// �Ψ��_�r
        while (ss >> word) {     /// Part 3: ��r��Ψ��_�r
            reverse(word.begin(), word.end()); /// Part 4: ��r�ϹL��
            cout << " " << word;
        }
        cout << endl;            /// ����
        /// cout << line << endl; /// ���H�K�L�X��
    }
}
