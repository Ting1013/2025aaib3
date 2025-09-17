// week02-2b.cpp
// SOIT106 ADVANCE 001 C++字串

#include <iostream>
#include <string>
using namespace std;

int main() {
    // 在瘋狂程設，不用印出「請輸入數字」
    string a, ans;
    cin >> a;

    // 將字串反轉
    for (int i = a.length() - 1; i >= 0; i--) {
        ans += a[i];
    }

    // 多印加號、多印等號
    cout << a << "+" << stoi(ans) << "=" << stoi(a) + stoi(ans) << endl;


    return 0;
}
