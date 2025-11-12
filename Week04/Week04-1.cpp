/// 第4週-1.CPP
/// 複習 C++ 伸縮自如的陣列 vector<int> a

#include <iostream>
#include <vector>   // 原本寫成 <向量>，要改成 <vector>
using namespace std;

int main() {
    vector<int> a;
    /// 上週教過「伸縮自如」的陣列沒有「初始化」大小
    cout << "沒有「初始化」a的長度是 " << a.size() << endl; // 一開始大小是0

    a.push_back(99); // 原本寫成 a.推回，要改成 push_back
    cout << "經過 .push_back(99) 後 a 的長度變 " << a.size() << endl;

    vector<int> b(3); // 建立長度3的 vector，裡面初始值都是 0
    cout << "b 的長度是 " << b.size() << endl;

    b.push_back(99); // 最後再加一個 99
    for (int i = 0; i < b.size(); i++) cout << b[i] << ' '; // 印出 0 0 0 99
    cout << endl;
    cout << "經過 .push_back(99) 後 b 變長了" << endl;

    vector<int> c(3, 88); // 長度3，每個元素都是88
    for (int i = 0; i < c.size(); i++) cout << c[i] << ' '; // 印出 88 88 88
    cout << endl;
    cout << "初始化 (3,88) 就會是三個88" << endl;

    return 0;
}
