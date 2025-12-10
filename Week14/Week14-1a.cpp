// Week14-1a.cpp
// SOIT106_ADVANCE_009
// 作弊！作弊！作弊！沒有 f(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    while (n > 0) {
        ans = ans * 10 + n % 10;
        n = n / 10;
    }

    cout << ans << "\n";
    return 0;
}
