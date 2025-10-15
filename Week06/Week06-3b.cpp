// week06-3b.cpp
// (SOIT106_ADVANCE_009) 進階題：函數反序排列數字 :

# include <iostream>
using namespace std;

void f(int n)
{
    if (n == 0) return;
    cout << n % 10;
    f(n / 10);
}

int main()
{
    int n;
    cin >> n;
    f(n);
    cout << "\n";
    return 0;
}
