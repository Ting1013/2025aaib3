// week05-4a.cpp
// SOIT107_ADVANCE_002
# include <iostream>
using namespace std;

int main()
{
    int now;
    cin >> now;              // 块材计
    int M = now, m = now;    // 砞﹚程(M)㎝程(m)

    for (int i = 1; i < 6; i++) {  // 钡帝弄 5 Ω 6 计
        cin >> now;
        if (now > M) M = now;      // 璝ゑヘ玡程临 △ 穝程
        if (now < m) m = now;      // 璝ゑヘ玡程临 △ 穝程
    }

    cout << M - m;           // 块程籔程畉
}
