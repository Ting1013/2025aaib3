// week02-2b.cpp
// SOIT106 ADVANCE 001 C++�r��

#include <iostream>
#include <string>
using namespace std;

int main() {
    // �b�ƨg�{�]�A���ΦL�X�u�п�J�Ʀr�v
    string a, ans;
    cin >> a;

    // �N�r�����
    for (int i = a.length() - 1; i >= 0; i--) {
        ans += a[i];
    }

    // �h�L�[���B�h�L����
    cout << a << "+" << stoi(ans) << "=" << stoi(a) + stoi(ans) << endl;


    return 0;
}
