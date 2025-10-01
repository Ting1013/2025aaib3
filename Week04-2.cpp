/// week04-2.cpp
/// 更多的 vector<int> a 的初始化(裡面要放什麼值)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(3);        // 初始長度 3，裡面都放 0
    vector<int> b(3, 88);    // 初始長度 3，裡面都放 88

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0}; // C語言陣列

    vector<int> d(c, c + 3); // 從 c[0] 開始，到 c+3 結束 => 取前三個
    for (int i = 0; i < d.size(); i++) cout << d[i] << " ";
    cout << "\n這是用 C 陣列輔助，幫忙 C++ vector 初始化一堆值\n\n";

    vector<int> e(c, c + 10); // 從 c[0] 開始，到 c+10 結束 => 取全部 10 個
    for (int i = 0; i < e.size(); i++) cout << e[i] << " ";
    cout << "\n這也是用 C 陣列輔助，幫忙 C++ vector 初始化一堆值\n\n";

    return 0;
}
