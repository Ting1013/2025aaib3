// week09-3b.cpp
//(SOIT106_ADVANCE_004)

#include <iostream>
using namespace std;

int main() {
    char c;
    while (cin >> c) {
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a'; // 大寫轉小寫
        else if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A'; // 小寫轉大寫
        cout << c;
    }
    cout << "\n";
    return 0;
}
