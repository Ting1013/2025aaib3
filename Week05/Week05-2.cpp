/// week05-2.cpp �X�i stringstream
# include <iostream>  /// ���F cin cout
# include <string>    /// ���F�r�� string
# include <sstream>   /// (�s)�� string�ܦ�stream

using namespace std;  /// ���F���g std::cin
int main()
{
    string line;  /// �ǳƩ�u�@���v���r��
    getline(cin, line);  /// �@��Ū�J�@���
    cout << line << endl;  /// �L�X�ӡA�[����

    stringstream ss(line);  /// (�s)����string�ܦ�stream
    string word;
    while (ss >> word){
        cout << "s�̭���1�Ӧr�G " << word << endl;
    }
}

